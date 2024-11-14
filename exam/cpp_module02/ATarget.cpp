#include "ATarget.hpp"

ATarget::ATarget(ATarget const& other) {
    *this = other;
}

ATarget& ATarget::operator=(ATarget const& other) {
    type = other.type;
    return *this;
}

ATarget::~ATarget() {}

ATarget::ATarget(const std::string& t) : type(t) {}

std::string const& ATarget::getType() const {
    return type;
}

void    ATarget::getHitBySpell(ASpell const& obj) const {
    std::cout << type << " has been " << obj.getEffects() << "!\n";
}


