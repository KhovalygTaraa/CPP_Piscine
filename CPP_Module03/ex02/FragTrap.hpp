/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:33:41 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 22:13:06 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <unistd.h>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:
		FragTrap(); /* canon */
		~FragTrap(); /* canon */
		FragTrap(const FragTrap &fragtrap); /* canon */
		FragTrap &operator=(const FragTrap &right); /* canon */
		FragTrap(std::string name);
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
