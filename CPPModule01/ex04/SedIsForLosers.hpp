#ifndef SEDISFORLOSERS_HPP
# define SEDISFORLOSERS_HPP
# include <string>

class Sed
{
private:
	std::string _olgword;
	std::string _newword;

public:
	Sed(std::string word);
	~Sed(void);
	std::string getWord() const;
	void 				set_word(std::string newWord);
};

#endif

