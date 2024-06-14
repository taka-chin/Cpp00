#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
  std::string command;
  PhoneBook phoneBook;
  Contact contact;
  int index;

  while (true) {
    std::getline(std::cin, command);
    if (command == "ADD") {
      std::cout << "ADD\n" << std::flush;
      index = phoneBook.getIndex();
      std::cout << index << std::endl;
      phoneBook.addContact(index % 8);
    }
    if (command == "SERACH")
      std::cout << "SERACH\n" << std::flush;
    if (command == "EXIT")
      break;
    if (command == "GET") {
      std::cout << "GET\n" << std::flush;
      // phoneBook.getContact(phoneBook.contacts);
    }
  }
  return (0);
}
