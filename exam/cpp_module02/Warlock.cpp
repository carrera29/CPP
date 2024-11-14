#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(Warlock const& other) {
    *this = other;
}

Warlock& Warlock::operator=(Warlock const& other) {
    name = other.name;
    title = other.title;
    return *this;
}

Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string& n, const std::string& t) : name(n), title(t) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}

std::string const& Warlock::getName() const {
    return name;
}

std::string const& Warlock::getTitle() const {
    return title;
}

void    Warlock::setTitle(std::string const& str) {
    title = str;
}

void    Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell* spell) {
    sb.learnSpell(spell);
}

void    Warlock::forgetSpell(std::string const spellName) {
    sb.forgetSpell(spellName);
}

void    Warlock::launchSpell(std::string const spellName, ATarget const& target) {
    if (sb.createSpell(spellName)) {
        sb.createSpell(spellName)->launch(target);
    }
}