#ifndef WEAPON_HPP_
#define WEAPON_HPP_
#include <string>

class	Weapon {
	public:
		explicit			Weapon(std::string type);
		const std::string& 	getType() const;
		void				setType(std::string type);
	private:
		std::string	type;
};

#endif  // WEAPON_HPP_
