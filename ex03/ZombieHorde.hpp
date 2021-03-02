#ifndef ZOMBIEHORDE_HPP_
#define ZOMBIEHORDE_HPP_
#include <cstdlib>
#include <iostream>
#include <string>
#include "Zombie.hpp"

class	ZombieHorde {
	public:
		explicit			ZombieHorde(int N);
							~ZombieHorde();
		void				announce() const;

	private:
		int					_nZombies;
		Zombie				*_horde;
		const std::string	&_randName() const;
		const std::string	&_randType() const;
};

#endif  // ZOMBIEHORDE_HPP_
