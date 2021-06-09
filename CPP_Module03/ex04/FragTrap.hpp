/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/03 02:40:29 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {

	public:
		FragTrap(); /* canon */
		~FragTrap(); /* canon */
		FragTrap(const FragTrap &fragtrap); /* canon */
		FragTrap &operator=(const FragTrap &right); /* canon */
		FragTrap(std::string name);
		void vaulthunter_dot_exe(std::string const &target);
		int F_get_hp(void);
		int F_get_maxhp(void);
		int F_get_range(void);
		int F_get_armor(void);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

#endif
