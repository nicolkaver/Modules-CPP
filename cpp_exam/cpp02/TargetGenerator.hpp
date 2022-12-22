#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

# include <iostream>
# include <string>
# include <map>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator {
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

private:
    TargetGenerator(TargetGenerator const &);
    TargetGenerator & operator=(TargetGenerator const &);

    std::map<std::string, ATarget *> _targetArray;
};

#endif