/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:25:10 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:46:50 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	this->name = name;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

const std::string Victim::getname(void) const
{
	return (this->name);
}

std::ostream& operator<<(std::ostream &strm, const Victim &p)
{
	strm << "I'm " << p.getname() << " and I like otters!" << std::endl;
	return (strm);
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const Victim &v)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	/* Вызываем оператор присваивания текущего объекта */
	this->operator=(v);
}

/* Получаем на вход ссылку на объект, на вывод отдаем ссылку на текущий объект для отрабокт цепочки присваиваний*/
Victim &Victim::operator=(const Victim &v)
{
	if (this == &v)
		return (*this);
	name = v.getname();
	/* Возвращаем указатель на текущий объект, это необходимо для цепочки присваиваний*/
	return (*this);
}

void Victim::setname(std::string name)
{
	this->name = name;
}
