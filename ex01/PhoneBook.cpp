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

void PhoneBook::t_setContact(void) {
  int i = 0;
  while (i < 8) {
    contacts[i].setFirstName("testFisrtName");
    contacts[i].setLastName("testLastName");
    contacts[i].setNickName("testNiclName");
    contacts[i].setPhoneNumber("testPhoneNumber");
    contacts[i].setDarkestSecret("testDarkestSecret");
    i++;
  }
};

void PhoneBook::getContact(int index) {
  int i = 0;
  if (index > 7)
    index = 8;
  while (i < index) {
    std::cout << contacts[i].getFirstName() << std::endl;
    std::cout << contacts[i].getLastName() << std::endl;
    std::cout << contacts[i].getNickName() << std::endl;
    std::cout << contacts[i].getPhoneNumber() << std::endl;
    std::cout << contacts[i].getDarkestSecret() << std::endl;
    i++;
  }
}

int PhoneBook::getIndex(void) {
  int index;

  index = 0;
  while (!contacts[index].getFirstName().empty()) {
    index++;
  }

  return index;
}

// void PhoneBook::searchContact() {}
