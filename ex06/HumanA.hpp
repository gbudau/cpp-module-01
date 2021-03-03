#ifndef HUMANA_HPP_
#define HUMANA_HPP_
#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA {
	public:
				HumanA(std::string name, const Weapon& weapon);
		void	attack() const;
	private:
		std::string			_name;
		const Weapon&		_weapon_ref;
};

#endif  // HUMANA_HPP_
