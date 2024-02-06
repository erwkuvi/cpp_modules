#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void addContact(int index);
	void searchContact(void);
	// void exitProgram(void) const;

private:
	Contact _contact[8];
};


#endif

//functions in classes are called "methods"
//variables in classes are called "members"
