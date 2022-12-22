#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock {
public:
    Warlock(std::string const &, std::string const &);
    ~Warlock();

    std::string const & getName() const;
    std::string const & getTitle() const;

    void setTitle(std::string const &);

    void introduce() const;
    void learnSpell(ASpell*);
    void forgetSpell(std::string);
    void launchSpell(std::string, ATarget const &);

private:
    std::string _name;
    std::string _title;
    std::map<std::string, ASpell *> _array;

    Warlock();
    Warlock(Warlock const &);
    Warlock & operator=(Warlock const &);
};

#endif