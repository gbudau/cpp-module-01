#ifndef HUMANB_HPP_
#define HUMANB_HPP_
#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB {
	public:
		explicit	HumanB(std::string name);
		void		attack() const;
		void		setWeapon(const Weapon &weapon);
	private:
		const std::string	_name;
		const Weapon		*_weapon_ptr;
};

#endif  // HUMANB_HPP_
