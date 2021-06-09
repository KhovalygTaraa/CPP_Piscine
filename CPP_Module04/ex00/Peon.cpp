/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:53:34 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->getname() << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(Peon const &p): Victim(p.getname())
{
	std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(const Peon &p)
{
	if (this == &p)
		return (*this);
	this->setname(p.getname());
	return (*this);
}
