#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_
#include <cstdlib>
#include <iostream>
#include <string>

class	Zombie {
	public:
					Zombie(std::string name = std::string(),
							std::string type = std::string());
		void		announce() const;
		void		setName(std::string name);
		void			setType(std::string type);

	private:
		std::string _name;
		std::string _type;
};

#endif  // ZOMBIE_HPP_
