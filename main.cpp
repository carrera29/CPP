#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& initialType);
    const std::string& getType() const;
    void setType(const std::string& newType);
};

Weapon::Weapon(const std::string& initialType) : type(initialType) {}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}

class HumanA {
private:
    Weapon weapon;
    std::string name;

public:
    HumanA(const std::string& newName, const Weapon& newWeapon);
    void attack() const;
};

HumanA::HumanA(const std::string& newName, const Weapon& newWeapon) : name(newName), weapon(newWeapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

class HumanB {
private:
    Weapon* weapon;
    std::string name;

public:
    HumanB(const std::string& newName);
    ~HumanB();
    void setWeapon(const Weapon& newWeapon);
    void attack() const;
};

HumanB::HumanB(const std::string& newName) : name(newName), weapon(nullptr) {}

HumanB::~HumanB() {
    delete weapon;
}

void HumanB::setWeapon(const Weapon& newWeapon) {
    if (weapon) {
        delete weapon;
    }
    weapon = new Weapon(newWeapon.getType());
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " is unarmed and cannot attack!" << std::endl;
    }
}

int main() {
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        HumanB john("John");
        john.attack();
        Weapon sword("longsword");
        john.setWeapon(sword);
        john.attack();
        sword.setType("greatsword");
        john.attack();
    }

    return 0;
}