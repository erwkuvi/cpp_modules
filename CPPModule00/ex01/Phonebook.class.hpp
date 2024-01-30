#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Contact
{
public:

    FirstName;
    LastName;
    NickName;
    PhoneNumber;

private:

};

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    Contact contact[8];
private:

};


#endif