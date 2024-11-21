
#include <stdio.h>
#include <string.h>

int contactCount = 0;

struct Contact {
    char name[50];
    int phone;  // Store phone number as an integer
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

    while (1) {
        menu();
        int choice;
        printf("Enter your choice: ");
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
                printf("Thank You For Using Phonebook.Exiting...\n");
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
    printf("1. Add Contact Details\n");
    printf("2. Edit Contact Details\n");
    printf("3. Display All Contacts\n");
    printf("4. Delete Contact\n");
    printf("5. Search Contact\n");
    printf("6. Exit\n\n");
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
    scanf("%d", &phonebook[contactCount].phone);  // Read phone number as integer

    printf("Enter email: ");
    scanf(" %[^\n]", phonebook[contactCount].email);  // Read email

    contactCount++;  // Increment the contact count
    printf("Contact added successfully.\n");
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
        printf("%d) Name: %s \n   Phone: %d \n   Email: %s\n", i + 1, phonebook[i].name, phonebook[i].phone, phonebook[i].email);
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

    //accessing the contact using its index in the array
    printf("Editing contact: %s\n", phonebook[contactNumber - 1].name);

    int choice;
    printf("\nSelect the field you want to update [ 1/2/3 ]:\n");
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
            scanf("%d", &phonebook[contactNumber - 1].phone);
            break;
        case 3:
            printf("Enter new email: ");
            scanf(" %[^\n]", phonebook[contactNumber - 1].email);
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    printf("Contact updated successfully.\n");
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
    printf("Contact deleted successfully.\n");
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
           
            printf("%d) Name: %s \n   Phone: %d \n   Email: %s\n", i + 1, phonebook[i].name, phonebook[i].phone, phonebook[i].email);
           
            found = 1;
            break;  // Exit the loop after the first match is found
        }
    }

    if (!found) {
        printf("No contact found with that name.\n");
    }
}
