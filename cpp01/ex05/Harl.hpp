#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3
# define NUM_LEVEL 4

class Harl;

typedef struct  s_complain
{
	std::string level;
	void        (Harl::*func_ptr)(void);
}               t_complain;


class Harl {
    public:
        Harl(void);
        ~Harl(void);

        void    complain(std::string level);

    private:
        void        _debug(void);
        void        _info(void);
        void        _warning(void);
        void        _error(void);
        t_complain	_complain_list[NUM_LEVEL];
};

#endif