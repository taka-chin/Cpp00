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
    if (std::cin.eof())
      exit(1);
    if (command == "ADD") {
      phoneBook.addContact(index % 8);
      index++;
    }
    if (command == "SEARCH") {
      phoneBook.displayContact(index);
      phoneBook.searchContact();
    }
    if (command == "EXIT")
      break;
  }
  return (0);
}
