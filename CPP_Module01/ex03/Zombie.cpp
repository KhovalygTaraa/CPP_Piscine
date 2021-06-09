/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:58:05 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:42:59 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << '<' << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

Zombie::Zombie()
{
	this->name = "";
	this->type = "";
}
void Zombie::setZombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;	
}