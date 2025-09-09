# Address Book

A simple **Address Book** application to store and manage contacts efficiently using a command-line interface.

## Features
- Add new contacts (name, phone, email, etc.)
- Edit existing contacts
- Delete unwanted contacts
- View all saved contacts

## Technologies Used
- Language: C (replace with your language if different)
- File handling to store contacts persistently
- Command-line interface

## Installation & Usage

1. Clone the repository:  
   git clone https://github.com/Fahimkhan-09/Address-Book.git
2. Navigate to the project folder:  
   cd Address-Book
3. Compile the code (if using C/C++):  
   gcc main.c -o addressbook
4. Run the program:  
   ./addressbook

## Example
---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
1
Create contact is selected
Enter the name: John Doe
Enter the phone number: 9876543210
Enter Mail Address: john.doe@example.com
Contact added successfully.

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
1
Create contact is selected
Enter the name: Jane Smith
Enter the phone number: 9123456780
Enter Mail Address: jane.smith@example.com
Contact added successfully.

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
5
List contacts is selected
Name            	Mobile         	Email                         
---------------------------------------------------------------------------------------
John Doe         9876543210      john.doe@example.com          
Jane Smith       9123456780      jane.smith@example.com        

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
2
Edit contact is selecetd
Enter you want to edit by
1.Name
2.Phone
3.Email
Enter your choice: 1
Enter the name you want to edit: John Doe
Contact found: John Doe
Enter new name: John D.
Name updated successfully!

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
5
List contacts is selected
Name            	Mobile         	Email                         
---------------------------------------------------------------------------------------
John D.          9876543210      john.doe@example.com          
Jane Smith       9123456780      jane.smith@example.com        

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
3
Search contact is selected
Search contact by:
1.Name
2.Phone
3.Email
Enter your choice: 1
Enter the name to search: Jane Smith
Contact found
Name=Jane Smith
Phone:9123456780
Email:jane.smith@example.com

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
4
Delete contact is selected
Delete contact by
1. Name
2. Phone
3. Email
Enter your choice: 2
Enter the phone number you want to delete: 9123456780
Contact found: Jane Smith | 9123456780 | jane.smith@example.com
Do you really want to delete?(y/n): y
Contact deleted successfully!

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
5
List contacts is selected
Name            	Mobile         	Email                         
---------------------------------------------------------------------------------------
John D.          9876543210      john.doe@example.com          

---Address Book---
1.Create Contact
2.Edit Contact
3.Search Contact
4.Delete Contact
5.List Contacts
6.Save and Exit
Enter your choice(1-6)
6
Contacts saved successfully!



