#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define NUM_LEVEL 4

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"

enum filterLevel {
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3
};

class Harl {
    public:
        Harl(void);
        ~Harl(void);

        void    complain(std::string);

    private:
        void        _debug(void);
        void        _info(void);
        void        _warning(void);
        void        _error(void);
};

#endif
