#ifndef BRAIN_H
#define BRAIN_H
#include <string>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define GREEN "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

class Brain {
	protected:
		std::string ideas[100];

	public:
		Brain(void);
		//Brain(const std::string& arg); // In case you need to pass an  argument
		Brain(const Brain& instance);
		Brain&operator=(const Brain& rhs);
		~Brain(void);
		void setIdea(int idx, std::string idea);
		void printIdeas() const;
};
#endif // BRAIN_H

