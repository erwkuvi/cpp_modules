#ifndef BRAIN_H
#define BRAIN_H
#include <string>

class Brain {
	protected:
		std::string ideas[100];

	public:
		Brain(void);
		//Brain(const std::string& arg); // In case you need to pass an  argument
		Brain(const Brain& instance);
		Brain&operator=(const Brain& rhs);
		~Brain(void);

};
#endif // BRAIN_H

