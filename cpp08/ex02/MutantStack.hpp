#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <iostream>
# include <deque>

template< typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack<T>& src) { *this = src; }
	MutantStack<T>& operator=(const MutantStack<T>& rhs) 
	{
		this->c = rhs.c;
		return *this;
	}
	~MutantStack() {}

	std::deque<T> getStack(void) const { return (this->c); }

	typedef typename container::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

template<typename T>
std::ostream & operator<<(std::ostream & out, MutantStack<T> const & mstack)
{
	for(unsigned long int i = 0; i < mstack.getStack().size(); ++i)
		out << mstack.getStack().at(i) << " ";
	return (out);
}
#endif

// useful explanations : https://stackoverflow.com/questions/73440733/how-can-i-implement-my-own-stack-iterator-in-c