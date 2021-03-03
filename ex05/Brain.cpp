#include "Brain.hpp"

std::string	Brain::identify() const {
	std::ostringstream	oss;

	oss << this;
	std::string address = oss.str();
	return address;
}
