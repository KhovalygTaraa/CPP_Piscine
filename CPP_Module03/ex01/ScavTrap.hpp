/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 18:41:14 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <unistd.h>

class ScavTrap {

	private:
		int hp;
		static const int max_hp = 100;
		int energy;
		static const int max_energy = 50;
		static const int level = 1;
		std::string name;
		static const int melee_dmg = 20;
		static const int ranged_dmg = 15;
		static const int armor = 3;

	public:
		ScavTrap(); /* canon */
		~ScavTrap(); /* canon */
		ScavTrap(const ScavTrap &scavtrap); /* canon */
		ScavTrap &operator=(const ScavTrap &right); /* canon */
		ScavTrap(std::string name);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer();
		
};

#endif
