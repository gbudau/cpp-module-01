#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void	randomChump() {
	ZombieEvent					event;
	static const std::string	names[] = {"Gina Cadiverous",
											"Bud the Chud",
											"Graveyard Betty",
											"Undead Fred"};
	static const std::string	types[] = {"Voodoo",
											"Ghoul",
											"Crawler",
											"Melting"};
	int r = rand() % sizeof(types)/sizeof(types[0]);
	event.setZombieType(types[r]);
	r = rand() % sizeof(names)/sizeof(names[0]);
	Zombie	*zombie = event.newZombie(names[r]);
	zombie->announce();
	delete zombie;
}

int			main() {
	Zombie	zombie_one("Noka Hoonas", "Exploder");
	Zombie	zombie_two("Meg A. Bowels", "Metal");
	Zombie	zombie_three("Rott Wilder", "Doom");

	zombie_one.announce();
	zombie_two.announce();
	zombie_three.announce();
	srand(time(NULL));
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
}
