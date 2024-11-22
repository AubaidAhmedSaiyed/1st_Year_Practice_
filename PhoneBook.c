// Mini Project - Prepared by 24DIT063_Aubaid Ahmed
// Topic - Simple Phone Book

#include <stdio.h>
#include <string.h>

int contactCount = 0; // to count number of contacts

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// Function declarations
void addContact(struct Contact phonebook[]);
void displayContacts(struct Contact phonebook[]);
void editContact(struct Contact phonebook[]);
void deleteContact(struct Contact phonebook[]);
void searchContact(struct Contact phonebook[]);
void saveContacts(struct Contact phonebook[]);
void loadContacts(struct Contact phonebook[]);
void menu();

int main() {
    struct Contact phonebook[100];
    printf("\n\n\t---------- WELCOME TO THE PHONEBOOK -----------\n\n");

    // read contacts from the file when the program starts
    loadContacts(phonebook);

    while (1) {
        menu();
        int choice;
        printf("Enter your choice [ 1/2/3/4/5/6 ] : ");
        scanf("%d", &choice);
        getchar();  // To consume newline after scanf

        switch (choice) {
            case 1:
                addContact(phonebook);
                break;
            case 2:
                editContact(phonebook);
                break;
            case 3:
                displayContacts(phonebook);
                break;
            case 4:
                deleteContact(phonebook);
                break;
            case 5:
                searchContact(phonebook);
                break;
            case 6:
                // Save contacts to the file before exiting
                saveContacts(phonebook);
                printf("\n\nThank you for using the Phonebook. Exiting...\n\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Display the menu
void menu() {
    printf("\n\t\t------- Phonebook Menu -------\n\n");
    printf("\t\t1. Add Contact Details\n");
    printf("\t\t2. Edit Contact Details\n");
    printf("\t\t3. Display All Contacts\n");
    printf("\t\t4. Delete Contact\n");
    printf("\t\t5. Search Contact\n");
    printf("\t\t6. Exit\n\n");
}

// Function to add a new contact
void addContact(struct Contact phonebook[]) {
    if (contactCount >= 100) {
        printf("\nPhonebook is full.\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", phonebook[contactCount].name);

    printf("Enter phone number: ");
    scanf(" %[^\n]", phonebook[contactCount].phone);

    printf("Enter email: ");
    scanf(" %[^\n]", phonebook[contactCount].email);

    contactCount++;
    printf("\nContact added successfully.\n");
}

// Function to display all contacts in the phonebook
void displayContacts(struct Contact phonebook[]) {
    if (contactCount == 0) {
        printf("\nPhonebook is empty.\n");
        return;
    }

    printf("\nPhonebook Contacts:\n");
    printf("\t--------------\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d) Name: %s \n   Phone: %s \n   Email: %s\n", 
               i + 1, phonebook[i].name, phonebook[i].phone, phonebook[i].email);
        printf("\t--------------\n");
    }
}

// Function to edit an existing contact
void editContact(struct Contact phonebook[]) {
    int contactNumber;

    displayContacts(phonebook);
    printf("\n");

    printf("Enter the contact number (serial number) to edit: ");
    scanf("%d", &contactNumber);
    getchar();

    if (contactNumber < 1 || contactNumber > contactCount) {
        printf("Invalid contact number.\n");
        return;
    }

    printf("Editing contact: %s\n", phonebook[contactNumber - 1].name);

    int choice;
    printf("\nSelect the field you want to update [1/2/3]:\n");
    printf("1. Name\n");
    printf("2. Phone Number\n");
    printf("3. Email\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            printf("Enter new name: ");
            scanf(" %[^\n]", phonebook[contactNumber - 1].name);
            break;
        case 2:
            printf("Enter new phone number: ");
            scanf(" %[^\n]", phonebook[contactNumber - 1].phone);
            break;
        case 3:
            printf("Enter new email: ");
            scanf(" %[^\n]", phonebook[contactNumber - 1].email);
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    printf("\nContact updated successfully.\n");
}

// Function to delete contact
void deleteContact(struct Contact phonebook[]) {
    int contactNumber;

    displayContacts(phonebook);

    printf("Enter the contact number (serial number) to delete: ");
    scanf("%d", &contactNumber);
    getchar();

    if (contactNumber < 1 || contactNumber > contactCount) {
        printf("Invalid contact number.\n");
        return;
    }

    for (int i = contactNumber - 1; i < contactCount - 1; i++) {
        phonebook[i] = phonebook[i + 1];
    }

    contactCount--;
    printf("\nContact deleted successfully.\n");
}

// Function to search for a contact by name
void searchContact(struct Contact phonebook[]) {
    char searchName[50];
    int found = 0;

    printf("Enter the name to search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(phonebook[i].name, searchName) == 0) {
            printf("\n\tContact Number %d:\n", i + 1);
            printf("\t- Name: %s\n", phonebook[i].name);
            printf("\t- Phone: %s\n", phonebook[i].phone);
            printf("\t- Email: %s\n", phonebook[i].email);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No contact found with that name.\n");
    }
}

// Function to save contacts to a file
void saveContacts(struct Contact phonebook[]) {
    FILE *file = fopen("phonebook.txt", "w");
    if (file == NULL) {
        printf("Error opening file for saving.\n");
        return;
    }
    // writing contacts in the file
    for (int i = 0; i < contactCount; i++) {
        fprintf(file, "%s,%s,%s\n", phonebook[i].name, phonebook[i].phone, phonebook[i].email);
    }

    fclose(file);
    printf("\nContacts saved successfully.\n");
}

// Function to load contacts from a file
void loadContacts(struct Contact phonebook[]) {
    FILE *file = fopen("phonebook.txt", "r");
    if (file == NULL) {
        printf("No existing phonebook file found. Starting fresh.\n");
        return;
    }

    while (fscanf(file, " %[^,],%[^,],%[^\n]\n", // reading contacts till reach EOF
                  phonebook[contactCount].name, 
                  phonebook[contactCount].phone, 
                  phonebook[contactCount].email) != EOF) {
        contactCount++;
    }

    fclose(file);
    printf("\nContacts loaded successfully.\n");
}
