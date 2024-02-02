#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>

class Contact
{
public:
    bool setName(std::string input, std::string column);
    std::string getName(std::string column);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
    std::string _darkestSecret
};

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	bool addContact(Contact contact, int index);
	bool searchContact(Contact *contact, std::string name);
	void exitProgram(void) const;

private:
	Contact _contact[8];
};


#endif

//functions in classes are called "methods"
//variables in classes are called "members"