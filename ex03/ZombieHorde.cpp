#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _nZombies(N) {
	if (N <= 0)
		return;
	this->_horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		this->_horde[i].setName(this->_randName());
		this->_horde[i].setType(this->_randType());
	}
}

ZombieHorde::~ZombieHorde() {
	if (this->_nZombies <= 0)
		return;
	delete [] this->_horde;
}

void	ZombieHorde::announce() const {
	for (int i = 0; i < this->_nZombies; i++) {
		this->_horde[i].announce();
	}
}

const std::string&	ZombieHorde::_randName() const {
	static const std::string	names[] = {"Gina Cadiverous",
											"Bud the Chud",
											"Graveyard Betty",
											"Undead Fred"};
	int	r = rand() % sizeof(names)/sizeof(names[0]);
	return names[r];
}

const std::string&	ZombieHorde::_randType() const {
	static const std::string	types[] = {"Voodoo",
											"Ghoul",
											"Crawler",
											"Melting"};
	int r = rand() % sizeof(types)/sizeof(types[0]);
	return types[r];
}
