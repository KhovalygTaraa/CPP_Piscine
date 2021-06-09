/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 21:48:35 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap:  public NinjaTrap, public FragTrap {

	public:
		SuperTrap(); /* canon */
		~SuperTrap(); /* canon */
		SuperTrap(const SuperTrap &SuperTrap); /* canon */
		SuperTrap &operator=(const SuperTrap &right); /* canon */
		SuperTrap(std::string name);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

#endif
