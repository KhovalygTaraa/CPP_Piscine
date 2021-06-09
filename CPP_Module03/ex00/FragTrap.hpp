/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 17:36:01 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>

class FragTrap {

	private:
		int hp;
		static const int max_hp = 100;
		int energy;
		static const int max_energy = 100;
		static const int level = 1;
		std::string name;
		static const int melee_dmg = 30;
		static const int ranged_dmg = 20;
		static const int armor = 5;

	public:
		FragTrap(); /* canon */
		~FragTrap(); /* canon */
		FragTrap(const FragTrap &fragtrap); /* canon */
		FragTrap &operator=(const FragTrap &right); /* canon */
		FragTrap(std::string name);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);
		
};

#endif
