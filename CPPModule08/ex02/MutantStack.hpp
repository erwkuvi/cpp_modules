#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
#include <iostream>
template <typename T, typename Container = std::deque<T>>

class MutantStack : public std::stack<T, Container>
{
	private:


	public:
		MutantStack(void){}
		
		MutantStack(const MutantStack& instance) : std::stack<T>(instance)
		{

		}
		MutantStack &operator=(const MutantStack& rhs)
		{
			if (this != &rhs)
			{
				std::stack<T>::operator=(rhs);
			}
			return *this;
		}
		~MutantStack(void){}


		void test()
		{
			std::cout << "test function" << std::endl;
			std::stack<T>::pop();
		}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}


};

#endif // MUTANTSTACK_HPP
