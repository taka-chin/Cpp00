#ifndef CPP00_EX01_PhoneBook_H_
#define CPP00_EX01_PhoneBook_H_

#include "Contact.hpp"

class PhoneBook {
private:
  Contact contacts[8];

public:
  void addContact(int index);
  void t_setContact(void);
  int getIndex(void);
  void getContact(int index);
  void searchContact(void);
  void displayContact(int index);
  std::string inputCheck(int id);
  void print_msg(int id);
  std::string processContact(std::string buf);
  bool isprintString(std::string str);
  void printHeader();
};

#endif
