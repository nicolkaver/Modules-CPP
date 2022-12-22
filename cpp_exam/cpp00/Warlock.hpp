#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
public:
    Warlock(std::string const &, std::string const &);
    ~Warlock();

    std::string const & getName() const;
    std::string const & getTitle() const;

    void setTitle(std::string const &);

    void introduce() const;

private:
    std::string _name;
    std::string _title;

    Warlock();
    Warlock(Warlock const &);
    Warlock & operator=(Warlock const &);
};


#endif