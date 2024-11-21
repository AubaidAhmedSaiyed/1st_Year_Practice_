#include <stdio.h>
#include <string.h>

int contactCount = 0;

struct Contact {
    char name[50];
    char phone[15];  // Changed to char array to store phone numbers as strings
    char email[50];
};

// Function declarations
void addContact(struct Contact phonebook[]);
void displayContacts(struct Contact phonebook[]);
void editContact(struct Contact phonebook[]);
void deleteContact(struct Contact phonebook[]);
void searchContact(struct Contact phonebook[]);
void menu();

int main() {
    struct Contact phonebook[100];
    printf("\n\n\t---------- WELCOME TO THE PHONEBOOK -----------\n\n");

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
                printf("Thank you for using the Phonebook. Exiting...\n");
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
    scanf(" %[^\n]", phonebook[contactCount].name);  // Read name for the new contact

    printf("Enter phone number: ");
    scanf(" %[^\n]", phonebook[contactCount].phone);  // Read phone number as a string

    printf("Enter email: ");
    scanf(" %[^\n]", phonebook[contactCount].email);  // Read email

    contactCount++;  // Increment the contact count
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
    getchar();  // To consume newline after scanf

    if (contactNumber < 1 || contactNumber > contactCount) {
        printf("Invalid contact number.\n");
        return;
    }

    // Accessing the contact using its index in the array
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
    getchar();  // To consume newline after scanf

    if (contactNumber < 1 || contactNumber > contactCount) {
        printf("Invalid contact number.\n");
        return;
    }

    // Shift all contacts after the deleted one to the left
    for (int i = contactNumber - 1; i < contactCount - 1; i++) {
        phonebook[i] = phonebook[i + 1];
    }

    contactCount--;  // Decrease the contact count after deletion
    printf("\nContact deleted successfully.\n");
}

// Function to search for a contact by name
void searchContact(struct Contact phonebook[]) {
    char searchName[50];
    int found = 0;

    printf("Enter the name to search: ");
    scanf(" %[^\n]", searchName);  // Read search name

    for (int i = 0; i < contactCount; i++) {
        // Compare each contact's name exactly with the search query
        if (strcmp(phonebook[i].name, searchName) == 0) {
            printf("\nName: %s \n   Phone: %s \n   Email: %s\n", 
                   i + 1, phonebook[i].name, phonebook[i].phone, phonebook[i].email);
            found = 1;
            break;  // Exit the loop after the first match is found
        }
    }

    if (!found) {
        printf("No contact found with that name.\n");
    }
}
