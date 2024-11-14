#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

    private:
        std::string name;
        std::string title;
        std::map< std::string, ASpell* > sb;

        Warlock();
        Warlock(Warlock const& other);
        Warlock& operator=(Warlock const& other);

    public:
        Warlock(const std::string& name, const std::string& title);
        ~Warlock();

        std::string const& getName() const;
        std::string const& getTitle() const;
        void    setTitle(std::string const& str);
        void    introduce() const;

        void    learnSpell(ASpell* obj);
        void    forgetSpell(std::string const spellName);
        void    launchSpell(std::string const spellName, ATarget const& obj);
};
