#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	return;
}

void		Zombie::announce() const {
	static const std::string	announcements[] = {"Braiiiiiiinnnssss...",
												"Sicut horribilem...",
												"RaA ggRrR!!...",
												"Zabba dabba zinga...",
												"Gar gar ga za...",
												"Zagatabodge..."};
	int r = rand() % sizeof(announcements)/sizeof(announcements[0]);
	std::cout << "<" << this->_name << " (" <<
		this->_type << ")> " << announcements[r] << std::endl;
}

void		Zombie::setName(std::string name) {
	this->_name = name;
}

void		Zombie::setType(std::string type) {
	this->_type = type;
}
