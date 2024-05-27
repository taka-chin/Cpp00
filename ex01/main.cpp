#include <iostream>
#include <string>

/* It has an array of contacts. */
/* It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
 */
/* replace the oldest one by the new one. */
/* Please note that dynamic allocation is forbidden. */
/* /1* Stands for a phonebook contact. *1/ */

class Contact
{
	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

class PhoneBook
{
	public:
		Contact contacts[8];
		void addContact(Contact *contact);
		void getIndex(Contact *contact);
		void searchContact();
		void getContact(Contact *contact);
};

void PhoneBook::addContact(Contact *tmp)
{
	std::cout << "First name: ";
	std::cin >> tmp[0].firstName;
	std::cout << "Last name: ";
	std::cin >> tmp[0].lastName;
	std::cout << "Nickname: ";
	std::cin >> tmp[0].nickname;
	std::cout << "Phone number: ";
	std::cin >> tmp[0].phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> tmp[0].darkestSecret;
};

void PhoneBook::getContact(Contact *tmp)
{
	std::cout << tmp[0].firstName << std::endl;
	std::cout << tmp[0].lastName << std::endl;
	std::cout << tmp[0].nickname << std::endl;
	std::cout << tmp[0].phoneNumber << std::endl;
	std::cout << tmp[0].darkestSecret << std::endl;
}

int PhoneBook::getIndex(Contact *tmp)
{
	int i = 0;
	while()
	{
		std::cout << tmp[0].firstName << std::endl;
		std::cout << tmp[0].lastName << std::endl;
		std::cout << tmp[0].nickname << std::endl;
		std::cout << tmp[0].phoneNumber << std::endl;
		std::cout << tmp[0].darkestSecret << std::endl;
		i++;
	}
	return (i);
}

int main() {
  std::string command;
	PhoneBook phoneBook;
	Contact contact;
  while (true) {
    std::cin >> command;
    if (command == "ADD")
		{
      std::cout << "ADD\n";
			phoneBook.addContact(phoneBook.contacts);
		}
    if (command == "SERACH")
      std::cout << "SERACH\n";
    if (command == "EXIT")
      break;
    if (command == "GET")
		{
      std::cout << "GET\n";
			phoneBook.getContact(phoneBook.contacts);
		}
  }
  return (0);
}
