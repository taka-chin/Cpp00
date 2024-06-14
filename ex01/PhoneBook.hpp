#ifndef CPP00_EX01_PhoneBook_H_
#define CPP00_EX01_PhoneBook_H_

#include "Contact.hpp"

class PhoneBook {
private:
  Contact contacts[8];

public:
  void addContact(int index);
  int getIndex(void);
  // void getContact(Contact *contact);
};

#endif
