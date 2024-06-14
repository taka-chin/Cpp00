#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void PhoneBook::addContact(int index) {
  std::string buf;

  std::cout << "First name: " << std::flush;
  std::getline(std::cin, buf);
  contacts[index].setFirstName(buf);

  std::cout << "Last name: " << std::flush;
  std::getline(std::cin, buf);
  contacts[index].setLastName(buf);

  std::cout << "Nickname: " << std::flush;
  std::getline(std::cin, buf);
  contacts[index].setNickName(buf);

  std::cout << "Phone number: " << std::flush;
  std::getline(std::cin, buf);
  contacts[index].setPhoneNumber(buf);

  std::cout << "Darkest secret: " << std::flush;
  std::getline(std::cin, buf);
  contacts[index].setDarkestSecret(buf);
};

// void PhoneBook::getContact(Contact *tmp) {
//   std::cout << tmp[0].firstName << std::endl;
//   std::cout << tmp[0].lastName << std::endl;
//   std::cout << tmp[0].nickname << std::endl;
//   std::cout << tmp[0].phoneNumber << std::endl;
//   std::cout << tmp[0].darkestSecret << std::endl;
// }
//
//
int PhoneBook::getIndex(void) {
  int index;

  index = 0;
  while (!contacts[index].getFirstName().empty()) {
    index++;
  }

  return index;
}

// void PhoneBook::searchContact() {}
