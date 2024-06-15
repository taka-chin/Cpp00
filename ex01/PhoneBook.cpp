#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

void PhoneBook::print_msg(int id) {
  std::cout << " can’t have empty fields\n" << std::flush;
  switch (id) {
  case 1:
    std::cout << "First name: " << std::flush;
    break;
  case 2:
    std::cout << "Last name: " << std::flush;
    break;
  case 3:
    std::cout << "Nickname: " << std::flush;
    break;
  case 4:
    std::cout << "Phone number: " << std::flush;
    break;
  case 5:
    std::cout << "Darkest secret: " << std::flush;
    break;
  }
}

std::string PhoneBook::inputCheck(int id) {
  std::string buf;
  while (true) {
    std::getline(std::cin, buf);
    if (!buf.empty())
      break;
    print_msg(id);
  }
  return buf;
}

void PhoneBook::addContact(int index) {
  std::string buf;

  std::cout << "First name: " << std::flush;
  buf = inputCheck(1);
  contacts[index].setFirstName(buf);

  std::cout << "Last name: " << std::flush;
  buf = inputCheck(2);
  contacts[index].setLastName(buf);

  std::cout << "Nickname: " << std::flush;
  buf = inputCheck(3);
  contacts[index].setNickName(buf);

  std::cout << "Phone number: " << std::flush;
  buf = inputCheck(4);
  contacts[index].setPhoneNumber(buf);

  std::cout << "Darkest secret: " << std::flush;
  buf = inputCheck(5);
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
};

int PhoneBook::getIndex(void) {
  int index;

  index = 0;
  while (!contacts[index].getFirstName().empty()) {
    index++;
  }
  return index;
};

std::string PhoneBook::processContact(std::string buf) {
  if (buf.length() > 10)
    buf = buf.substr(0, 9) + ".";
  return buf;
}

void PhoneBook::displayContact(int index) {
  std::string buf;

  buf = contacts[index].getFirstName();
  buf = processContact(buf);
  std::cout << "|" << std::setw(10) << buf << std::flush;
  buf = contacts[index].getLastName();
  buf = processContact(buf);
  std::cout << "|" << std::setw(10) << buf << std::flush;
  buf = contacts[index].getNickName();
  buf = processContact(buf);
  std::cout << "|" << std::setw(10) << buf << std::flush;
  buf = contacts[index].getPhoneNumber();
  buf = processContact(buf);
  std::cout << "|" << std::setw(10) << buf << std::flush;
  std::cout << "|" << std::endl << std::flush;
}

void PhoneBook::searchContact() {
  int index = -1;
  while (true) {
    std::cout << "Please input index 0 to 7\n" << std::flush;
    std::cin >> index;
    if (index > -1 && index < 8)
      break;
  }
  displayContact(index);
}
