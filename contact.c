#include "contact.h"
void savecontacts(AddressBook *addressBook)
{
    FILE *file=fopen("contacts.txt","w");
    if(file==NULL)
    {
        printf("File not found!\n");
        return;
    }
    for(int i=0;i<addressBook->contactCount;i++)
    {
        fprintf(file,"%s,%s,%s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);

    }
    fclose(file);
    printf("Contacts saved successfully!\n");
}
void loadcontacts(AddressBook *addressBook)
{
    FILE *file=fopen("contacts.txt","r");
    if(file==NULL)
    {
        printf("No saved contacts.\n");
        addressBook->contactCount=0;
        return;
    }
    addressBook->contactCount=0;
    while (fscanf(file, "%[^,],%[^,],%[^\n]\n",addressBook->contacts[addressBook->contactCount].name,addressBook->contacts[addressBook->contactCount].phone,addressBook->contacts[addressBook->contactCount].email) == 3) 
    {
        addressBook->contactCount++;
    }
    

    fclose(file);
    printf("Contacts loaded successfully!\n");


}


void listContacts(AddressBook *addressBook) 
{
    
    printf("Name    \tMobile    \tEmail\n");
    printf("---------------------------------------------------------------------------------------\n");
    for(int i=0;i<addressBook->contactCount;i++)
    {
        
        printf("%-20s %-15s %-30s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
    }
    
    
}

void initialize(AddressBook *addressBook) 
{
    addressBook->contactCount=0;
    
}

void createContact(AddressBook *addressBook) 
{
    printf("Enter the name:");
    scanf(" %[^\n]",addressBook->contacts[addressBook->contactCount].name);
    printf("Enter the phone number:");
    scanf("%s",addressBook->contacts[addressBook->contactCount].phone);
    printf("Enter Mail Address:");
    scanf("%s",addressBook->contacts[addressBook->contactCount].email);
    addressBook->contactCount++;
    printf("Contact added successfully.\n");
    


}

void searchContact(AddressBook *addressBook) 
{
    printf("---------------------------------------------------------------------------------------\n");
    char str[40];
    int choice;
    printf("Search contact by:\n");
    printf("1.Name\n");
    printf("2.Phone\n");
    printf("3.Email\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("Enter the name to search:");
        scanf(" %[^\n]",str);
        break;
        case 2:
        printf("Enter the number to search:");
        scanf(" %[^\n]",str);
        break;
        case 3:
        printf("Enter the email to search:");
        scanf(" %[^\n]",str);
        break;
        default:
        printf("Invalid choice!\n");
        return ;
        
        
    }
    int i;
    int found=0;
    for(i=0;i<addressBook->contactCount;i++)
    {
        if((choice ==1 && strcmp(addressBook->contacts[i].name,str)==0)||(choice ==2 && strcmp(addressBook->contacts[i].phone,str)==0)||(choice ==3 && strcmp(addressBook->contacts[i].email,str)==0))
        {
            printf("Contact found\n");
            printf("Name=%s\nPhone:%s\nEmail:%s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
            found=1;
            break;
        }
    }
    if(found!=1)
    {
        printf("Contact not found.\n");
    }


}

void editContact(AddressBook *addressBook) 
{
    int choice;
    char str[50];
    printf("Enter you want to edit by\n1.Name\n2.Phone\n3.Email\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the name you want to edit:");
        scanf(" %[^\n]", str);   
        for(int i=0;i<addressBook->contactCount;i++)
    {
        if(strcmp(addressBook->contacts[i].name,str)==0)
        {
            printf("Contact found: %s\n",addressBook->contacts[i].name);
            printf("Enter new name:");
            scanf(" %[^\n]",addressBook->contacts[i].name);
            printf("Name updated successfully!\n");
            return;
        }
    }
        break;

        case 2:
        printf("Enter the phone number you want to edit: ");
        scanf(" %[^\n]", str);
        for(int i=0;i<addressBook->contactCount;i++)
    {
        if(strcmp(addressBook->contacts[i].phone,str)==0)
        {
            printf("Contact found: %s\n",addressBook->contacts[i].phone);
            printf("Enter new phone number:");
            scanf(" %[^\n]",addressBook->contacts[i].phone);
            printf("Phone number updated successfully!\n");
            return;
        }
    }
        break;

        case 3:
        printf("Enter the email you want to edit: ");
        scanf(" %[^\n]", str);
        for(int i=0;i<addressBook->contactCount;i++)
    {
        if(strcmp(addressBook->contacts[i].email,str)==0)
        {
            printf("Contact found: %s\n",addressBook->contacts[i].email);
            printf("Enter new mail address:");
            scanf(" %[^\n]",addressBook->contacts[i].email);
            printf("Email updated successfully!\n");
            return;
        }
    }
        break;

        default:
        printf("Invalid choice!\n");
        return;
    }
    printf("Contact not found!\n");



}

void deleteContact(AddressBook *addressBook) 
{
    int choice;
    char confirm;
    char str[50];
    printf("Delete contact by\n1. Name\n2. Phone\n3. Email\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("Enter the name you want to delete: ");
        scanf(" %[^\n]", str);
        break;

        case 2:
        printf("Enter the phone number you want to delete: ");
        scanf(" %[^\n]", str);
        break;

        case 3:
        printf("Enter the email you want to delete: ");
        scanf(" %[^\n]", str);
        break;

        default:
        printf("Invalid choice!\n");
        return;
    }

    for (int i = 0; i < addressBook->contactCount; i++) 
    {
        if ((choice == 1 && strcmp(addressBook->contacts[i].name, str) == 0) ||
            (choice == 2 && strcmp(addressBook->contacts[i].phone, str) == 0) ||
            (choice == 3 && strcmp(addressBook->contacts[i].email, str) == 0))
        {
            printf("Contact found: %s | %s | %s\n",addressBook->contacts[i].name,addressBook->contacts[i].phone,addressBook->contacts[i].email);
            printf("Do you really want to delete?(y/n):");
            scanf(" %c",&confirm);
            if(confirm=='y'||confirm=='Y')
            {
                for (int j = i; j < addressBook->contactCount - 1; j++) 
                {
                    addressBook->contacts[j] = addressBook->contacts[j + 1];
                }

                addressBook->contactCount--;
                printf("Contact deleted successfully!\n");
                return;
            }
            else
            {
                return;
            }
        }
    }

    printf("Contact not found.\n");

}
