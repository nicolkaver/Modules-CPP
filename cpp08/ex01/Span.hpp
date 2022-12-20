#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream> 
# include <vector>
# include <algorithm>
# include <iterator>
# include <string>
# include <stdexcept>

class Span {
public:
    Span(unsigned int);
    Span(Span const &);
    ~Span(void);
    Span & operator=(Span const &);

    std::vector<int> getVector(void) const;
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    void print(int);

    template<typename T>
    void	addNumber(T start, T end)
	{
		int dist = std::distance(start, end);
		if (dist + this->vec.size() > this->N)
	    	throw Span::NoSpaceLeft();
		this->vec.insert(this->vec.end(), start, end);
	}

    class NoSpan : public std::exception {
    public:
        const char *what() const throw();
    };

    class NoSpaceLeft : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    unsigned int N;
    std::vector<int> vec;
};

std::ostream& operator<<(std::ostream& o, Span const & rhs);

#endif