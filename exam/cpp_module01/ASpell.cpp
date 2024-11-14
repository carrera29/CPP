#include "ASpell.hpp"

ASpell::ASpell(ASpell const& other) {
    *this = other;
}

ASpell& ASpell::operator=(ASpell const& other) {
    name = other.name;
    effects = other.effects;
    return *this;
}

ASpell::~ASpell() {}

ASpell::ASpell(const std::string& n, const std::string& e) : name(n), effects(e) {}

std::string const& ASpell::getName() const {
    return name;
}

std::string const& ASpell::getEffects() const {
    return effects;
}

void    ASpell::launch(ATarget const& obj) const {
    obj.getHitBySpell(*this);
}
