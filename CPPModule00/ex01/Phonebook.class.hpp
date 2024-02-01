#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Contact
{
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone;
};

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	void add_contact(int i);
	void search_contact(std::string contact);
	void exit_program(void) const;
	Contact contact[8];

};


#endif
