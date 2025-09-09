#include "contact.h"

int main()
{
    int choice;
    AddressBook s1;
    initialize(&s1);
    loadcontacts(&s1);
   // populate_contact(&s1);
    do
    {
        printf("\n---Address Book---\n");

        printf("1.Create Contact\n");
        printf("2.Edit Contact\n");
        printf("3.Search Contact\n");
        printf("4.Delete Contact\n");
        printf("5.List Contacts\n");
        printf("6.Save and Exit\n");
        printf("Enter your choice(1-6)\n");
        scanf("%d",&choice);
        
    
        switch(choice)
        {

            case 1:
                printf("Create contact is selected\n");
                createContact(&s1);
                break;
            case 2:
                printf("Edit contact is selecetd\n");
                editContact(&s1);
                break;
            case 3:
                printf("Search contact is selected\n");
                searchContact(&s1);
                break;
            case 4:
                printf("Delete contact is selected\n");
                deleteContact(&s1);
                break;
            case 5:
                printf("List contacts is selected\n");
                listContacts(&s1);
                break;
            case 6:
               // printf("Saved successfully\n");
                savecontacts(&s1);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }while(choice!=6);
}

       