#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
  std::string command;
  PhoneBook phoneBook;
  Contact contact;
  int index = 0;

  while (true) {
    std::getline(std::cin, command);
    if (command == "ADD") {
      std::cout << "ADD\n" << std::flush;
      std::cout << index << std::endl;
      phoneBook.addContact(index % 8);
      index++;
    }
    if (command == "SEARCH") {
      std::cout << "SEARCH\n" << std::flush;
      phoneBook.getContact(index);
      std::cout << index << std::endl;
      phoneBook.searchContact();
    }
    if (command == "EXIT")
      break;
  }
  return (0);
}
