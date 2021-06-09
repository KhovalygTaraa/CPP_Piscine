/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:52:24 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:59:21 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <unistd.h>

int main()
{
	/* проверка основного функционала */
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	std::cout <<src->getCount() << std::endl;
	src->learnMateria(new Cure());
	std::cout <<src->getCount() << std::endl;
	
	/* проверка оператора присваивания */
	// MateriaSource *src2 = new MateriaSource();
	// src = src2;
	// std::cout <<src->getCount() << std::endl;

	/* проверка конструктора копирования */
	// MateriaSource *src3 = new MateriaSource(*src);
	// std::cout <<src3->getCount() << std::endl;

//	Character *invoker = new Character("Invoker"); 
	/* проверка основного функционала и оператора присваивания */
	// Character *invoker2 = new Character("Invoker2");
	// invoker->equip(src->createMateria("ice"));
	// invoker->use(0, *invoker2);
	// invoker2 = invoker;
	// invoker2->use(0, *invoker);

	/* проверка конструктора копирования */
	// Character *noface = new Character(*invoker);
	
	// std::cout << noface->getName() << std::endl;

	/* проверка XP системы */
	// Ice *m1 = new Ice();
	// Cure *m2 = new Cure();
	// src->learnMateria(m1);
	// src->learnMateria(m2);
	
	// std::cout << m1->getXP() << std::endl;
	// m1->use(*invoker);
	// m1->use(*invoker);
	// m1->use(*invoker);
	// m1->use(*invoker);
	// m1->use(*invoker);
	// std::cout << m1->getXP() << std::endl;
	// std::cout << m2->getXP() << std::endl;
	// m2->use(*invoker);
	// m2->use(*invoker);
	// m2->use(*invoker);
	// std::cout << m2->getXP() << std::endl;
	return (0);
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	sleep(100);
// 	return 0;
// }
