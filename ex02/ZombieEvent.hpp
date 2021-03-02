#ifndef ZOMBIEEVENT_HPP_
#define ZOMBIEEVENT_HPP_
#include <string>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		void		setZombieType(std::string type);
		Zombie* 	newZombie(std::string name);
	private:
		std::string	_type;
};

#endif  // ZOMBIEEVENT_HPP_
