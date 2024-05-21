#include <iostream>

/* It has an array of contacts. */
/* It can store a maximum of 8 contacts. If the user tries to add a 9th contact, */
/* replace the oldest one by the new one. */
/* Please note that dynamic allocation is forbidden. */

class PhoneBook
{
	private:
		Contact contacts[8];
}


/* Stands for a phonebook contact. */
class Contact
{
	private:
		std::string name;
		std::string phoneNumber;
		std::string email;
		std::string address;
}


