#include "Weapon.hpp"

Weapon::Weapon(std::string wtype) : type(wtype) {
	return;
}

const std::string&	Weapon::getType() const {
	return this->type;
}

void				Weapon::setType(std::string type) {
	this->type = type;
}
