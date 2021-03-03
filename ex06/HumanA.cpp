#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon& weapon) :
											_name(name), _weapon_ref(weapon) {
	return;
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his " <<
									this->_weapon_ref.getType() << std::endl;
}
