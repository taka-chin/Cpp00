#include <iostream>
#include <string>

/* It has an array of contacts. */
/* It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
 */
/* replace the oldest one by the new one. */
/* Please note that dynamic allocation is forbidden. */
/* /1* Stands for a phonebook contact. *1/ */

class Contact {
public:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;
};

class PhoneBook {
public:
  Contact contacts[8];
  void addContact(Contact *contact, int i);
  int getIndex(Contact *contact);
  void searchContact();
  void getContact(Contact *contact);
  void setContact(Contact *contact);
};

void PhoneBook::addContact(Contact *tmp, int i) {
  std::cout << "First name: ";
  std::cin >> tmp[i].firstName;
  std::cout << "Last name: ";
  std::cin >> tmp[i].lastName;
  std::cout << "Nickname: ";
  std::cin >> tmp[i].nickname;
  std::cout << "Phone number: ";
  std::cin >> tmp[i].phoneNumber;
  std::cout << "Darkest secret: ";
  std::cin >> tmp[i].darkestSecret;
};

void PhoneBook::getContact(Contact *tmp) {
  std::cout << tmp[0].firstName << std::endl;
  std::cout << tmp[0].lastName << std::endl;
  std::cout << tmp[0].nickname << std::endl;
  std::cout << tmp[0].phoneNumber << std::endl;
  std::cout << tmp[0].darkestSecret << std::endl;
}

void PhoneBook::setContact(Contact *tmp) {
  int i = 0;
  while (i < 7) {
    tmp[i].firstName = "test";
    tmp[i].lastName = "test";
    tmp[i].nickname = "test";
    tmp[i].phoneNumber = "test";
    tmp[i].darkestSecret = "test";
    i++;
  }
}

int PhoneBook::getIndex(Contact *tmp) {
  int i = 0;
  while (i < 8) {
    if (tmp[i].firstName == "")
      break;
    i++;
  }
  return (i % 8);
}

int main() {
  std::string command;
  PhoneBook phoneBook;
  Contact contact;
  int i = 0;
  phoneBook.setContact(phoneBook.contacts);
  while (true) {
    std::cin >> command;
    if (command == "ADD") {
      std::cout << "ADD\n";
      i = phoneBook.getIndex(phoneBook.contacts);
      phoneBook.addContact(phoneBook.contacts, i);
    }
    if (command == "SERACH")
      std::cout << "SERACH\n";
    if (command == "EXIT")
      break;
    if (command == "GET") {
      std::cout << "GET\n";
      phoneBook.getContact(phoneBook.contacts);
    }
  }
  return (0);
}
