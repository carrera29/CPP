#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::SpellBook(SpellBook const& other) {
    *this = other;
}

SpellBook& SpellBook::operator=(SpellBook const& other) {
    sb = other.sb;
    return *this;
}

SpellBook::~SpellBook() {}


void    SpellBook::learnSpell(ASpell* spell) {
    if (spell) {
        sb[spell->getName()] = spell->clone();
    }
}

void    SpellBook::forgetSpell(std::string const &spellName) {
    if (sb.find(spellName) != sb.end()) {
        delete sb[spellName];
        sb.erase(sb.find(spellName));
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName) {
    ASpell* tmp = NULL;
    if (sb.find(spellName) != sb.end())
        tmp = sb[spellName];
    return tmp;
}