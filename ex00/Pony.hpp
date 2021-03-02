#ifndef PONY_HPP_
#define PONY_HPP_
#include <iostream>
#include <string>

class	Pony {
	public:
		explicit Pony(std::string name);

		void	dance() const;
	private:
		std::string _name;
};

#endif  // PONY_HPP_
