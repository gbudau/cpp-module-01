#include <ctime>
#include <cstdlib>
#include "ZombieHorde.hpp"

int			main() {
	srand(time(NULL));
	ZombieHorde	horde(10);
	horde.announce();
}
