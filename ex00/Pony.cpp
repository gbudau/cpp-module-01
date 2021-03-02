#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	return;
}

void	Pony::dance() const {
	std::cout << this->_name << " is dancing" << std::endl;
}
