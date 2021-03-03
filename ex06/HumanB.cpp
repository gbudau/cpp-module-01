#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name) {
	return;
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his " <<
									this->_weapon_ptr->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon &weapon) {
	this->_weapon_ptr = &weapon;
}
