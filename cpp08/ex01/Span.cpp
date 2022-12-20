#include "Span.hpp"

Span::Span(unsigned int N): N(N) {}

Span::Span(Span const & src) {
    *this = src;
}

Span & Span::operator=(Span const & rhs) {
    if (this != &rhs) {
        this->N = rhs.N;
        this->vec = rhs.vec;
    }
    return (*this);
}

Span::~Span(void) {}

std::vector<int> Span::getVector(void) const {
    return (this->vec);
}

void Span::addNumber(int num) {
    if (this->vec.size() == this->N)
        throw NoSpaceLeft();
    else
        this->vec.push_back(num);
}

int Span::shortestSpan(void) {
    if (this->vec.size() < 2)
        throw NoSpan();
    std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());
	int ret = sorted[1] - sorted[0];
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		if (ret > sorted[i + 1] - sorted[i])
			ret = sorted[i + 1] - sorted[i];
	}
	return (ret);
}

int Span::longestSpan(void) {
    if (this->vec.size() < 2)
        throw NoSpan();
    int min = *std::min_element(this->vec.begin(), this->vec.end());
    int max = *std::max_element(this->vec.begin(), this->vec.end());
    return (max - min);
}

//EXCEPTIONS
const char* Span::NoSpan::what() const throw()
{
	return ("Error: Impossible to detect any span.");
}

const char* Span::NoSpaceLeft::what() const throw()
{
	return ("Error: No space left in the array !");
}

std::ostream& operator<<(std::ostream& o, Span const & rhs)
{
    std::vector<int> tmp = rhs.getVector();
    std::vector<int>::iterator it = tmp.begin();
	for (unsigned long i = 0; i < rhs.getVector().size(); i++) {
        o << *it;
        it = tmp.begin() + i + 1;
        if (i != rhs.getVector().size() - 1)
            o << ", ";
    }
    o << std::endl;
	return (o);
}

// std::ostream& operator<<(std::ostream& o, Span const & rhs)
// {
// 	for (unsigned long i = 0; i < rhs.getVector().size(); i++) {
//         o << rhs.getVector().at(i);
//         if (i != rhs.getVector().size() - 1)
//             o << ", ";
//     }
//     o << std::endl;
// 	return (o);
// }