#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

    protected:
        std::string name;
        std::string effects;
        
    public:

        ASpell(const std::string& name, const std::string& effects);
        ASpell(ASpell const& other);
        ASpell& operator=(ASpell const& other);
        virtual ~ASpell();

        std::string const& getName() const;
        std::string const& getEffects() const;
        virtual ASpell* clone() const = 0;

        void    launch(ATarget const& obj) const;
};
