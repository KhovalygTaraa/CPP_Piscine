/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/03 02:19:02 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <unistd.h>

class ClapTrap {

	protected:
		int hp;
		int max_hp;
		int energy;
		int max_energy;
		static const int level = 1;
		std::string name;
		int melee_dmg;
		int ranged_dmg;
		int armor;
		std::string type;

	public:
		ClapTrap(); /* canon */
		virtual ~ClapTrap(); /* canon */
		ClapTrap(const ClapTrap &claptrap); /* canon */
		ClapTrap &operator=(const ClapTrap &right); /* canon */
		ClapTrap(std::string name);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
