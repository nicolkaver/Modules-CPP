#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void) {
    std::map<std::string, ATarget*>::iterator it_begin = _targetArray.begin();
    std::map<std::string, ATarget*>::iterator it_end = _targetArray.end();
    while (it_begin != it_end) {
        delete it_begin->second;
        ++it_begin;
    }
    _targetArray.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        _targetArray.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & target) {
    std::map<std::string, ATarget*>::iterator it = _targetArray.find(target);
    if (it != _targetArray.end())
        delete it->second;
    _targetArray.erase(target);
}

ATarget* TargetGenerator::createTarget(std::string const &target) {
    std::map<std::string, ATarget*>::iterator it = _targetArray.find(target);
    if (it != _targetArray.end())
        return (_targetArray[target]);
    return NULL;
}