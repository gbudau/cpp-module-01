#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_
#include <iostream>
#include <string>

class	Zombie {
	public:
					Zombie(std::string name, std::string type);
		void		announce() const;

	private:
		std::string _name;
		std::string _type;
};

#endif  // ZOMBIE_HPP_
