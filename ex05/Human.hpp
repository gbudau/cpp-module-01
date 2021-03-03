#ifndef HUMAN_HPP_
#define HUMAN_HPP_
#include <string>
#include "Brain.hpp"

class	Human {
	public:
						Human();
		std::string		identify() const;
		const Brain&	getBrain() const;
	private:
		const Brain	_brain;

};

#endif  // HUMAN_HPP_
