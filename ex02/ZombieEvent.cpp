#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie	*zombie = new Zombie(name, this->_type);
	return zombie;
}
