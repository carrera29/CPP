#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const& other) {
    *this = other;
}

TargetGenerator& TargetGenerator::operator=(TargetGenerator const& other) {
    targetMap = other.targetMap;
    return *this;
}

TargetGenerator::~TargetGenerator() {}


void    TargetGenerator::learnTargetType(ATarget* target) {
    if(target) {
        targetMap[target->getType()] = target;
    }
}

void    TargetGenerator::forgetTargetType(std::string const & target) {
    if (targetMap.find(target) != targetMap.end()) {
        targetMap.erase(targetMap.find(target));
    }
}

ATarget*    TargetGenerator::createTarget(std::string const & target) {
    ATarget* tmp = NULL;
    if (targetMap.find(target) != targetMap.end())
        tmp = targetMap[target];
    return tmp;
}