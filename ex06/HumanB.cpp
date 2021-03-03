#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name), _weapon_ptr() {
	return;
}

void	HumanB::attack() const {
	if (this->_weapon_ptr)
		std::cout << this->_name << " attacks with his " <<
									this->_weapon_ptr->getType() << std::endl;
	else
		std::cout << this->_name << " cannot attack without a weapon" << std::endl;
}

void	HumanB::setWeapon(const Weapon &weapon) {
	this->_weapon_ptr = &weapon;
}
