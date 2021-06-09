/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 00:50:19 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 01:10:15 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
	std::cout << this->name << " died" << std::endl;
}
