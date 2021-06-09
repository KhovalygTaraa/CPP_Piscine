/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:34:07 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	private:
	public:
		ScavTrap(); /* canon */
		~ScavTrap(); /* canon */
		ScavTrap(const ScavTrap &scavtrap); /* canon */
		ScavTrap &operator=(const ScavTrap &right); /* canon */
		ScavTrap(std::string name);
		void challengeNewcomer(void);
};

#endif
