/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:04:54 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:09:22 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		~HumanB();
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &weapon);
};

#endif