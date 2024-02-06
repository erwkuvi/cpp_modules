#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	bool setName(std::string input, std::string column);
	std::string getName(std::string column);
	int	filled;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
    std::string _darkestSecret;
};

#endif
