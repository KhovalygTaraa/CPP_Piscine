/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:06 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:47:07 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	this->name = name;
	this->title = title;
}

Sorcerer::Sorcerer(const Sorcerer &s)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	this->operator=(s);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string Sorcerer::getname(void) const
{
	return(this->name);	
}

const std::string Sorcerer::getitle(void) const
{
	return(this->title);
}

std::ostream& operator<<(std::ostream& strm, const Sorcerer &p)
{
	strm << "I am " << p.getname() << ", " << p.getitle() << ", and I like ponies!" << std::endl;
	return (strm);
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

Sorcerer &Sorcerer::operator=(const Sorcerer &s)
{
	if (this == &s)
		return (*this);
	name = s.getname();
	title = s.getitle();
	return (*this);
}
