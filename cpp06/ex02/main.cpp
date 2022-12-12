#include "Base.hpp"

Base* generate(void)
{
    Base* p;
    int i = rand() % 3;
    switch(i) {
        case 0:
            p = new A();
            break ;
        case 1:
            p = new B();
            break;
        case 2:
            p = new C();
            break;
    };
    return (p);
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer to A." << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "Pointer to B." << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "Pointer to C." << std::endl; 
}

void	identify(Base& p)
{
	A a;
	B b;
	C c;

	try {
		a = dynamic_cast<A&>(p);
		std::cout << "Reference to A." << std::endl;
	} catch (std::bad_cast & bc) {}
	try {
		b = dynamic_cast<B&>(p);
		std::cout << "Reference to B." << std::endl;
	} catch (std::bad_cast & bc) {}
	try {
		c = dynamic_cast<C&>(p);
		std::cout << "Reference to C." << std::endl;
	} catch (std::bad_cast & bc){}
}

int main(void)
{
    Base* p;

    srand(time(NULL));
    p = generate();
    identify(p);
    identify(*p);
}