/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 21:48:35 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {

	public:
		NinjaTrap(); /* canon */
		~NinjaTrap(); /* canon */
		NinjaTrap(const NinjaTrap &NinjaTrap); /* canon */
		NinjaTrap &operator=(const NinjaTrap &right); /* canon */
		NinjaTrap(std::string name);
		void ninjaShoebox(FragTrap &robot);
		void ninjaShoebox(ScavTrap &robot);
		void ninjaShoebox(ClapTrap &robot);
		void ninjaShoebox(NinjaTrap &robot);
};

#endif
