#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout << "Human did a melee attack on " <<
		target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "Human did a ranged attack on " <<
		target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "Human did a intimidating shout on " <<
		target << std::endl;
}

void	Human::action(std::string const & action_name,
												std::string const & target) {
	std::string const	action_names[N_ACTIONS] =
					{"melee attack", "ranged attack", "intimidating shout"};
	void (Human::*const function_ptr[N_ACTIONS])(std::string const &) =
		{&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < N_ACTIONS; i++)
		if (action_name == action_names[i])
			(*this.*function_ptr[i])(target);
}
