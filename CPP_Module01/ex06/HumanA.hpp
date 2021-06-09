/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 00:50:17 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:10:35 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		~HumanA();
		HumanA(std::string name, Weapon &weapon);
		void attack(void);
};

#endif