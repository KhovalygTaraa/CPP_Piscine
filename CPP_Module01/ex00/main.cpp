/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:22:57 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 00:37:53 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(std::string name, std::string color, int age)
{
	Pony	*new1;
	
	new1 = new Pony(name, color, age);
	std::cout << "I am "  << new1->get_color() << " " << new1->get_name() << " My age is " << new1->get_age() << '\n'; 
	new1->set_name("Alfredson");
	new1->set_color("Green");
	new1->set_age(32);
	std::cout << "Now my name is " << new1->get_name() << " because now my age is " << new1->get_age() << " years old\n";
	delete(new1);
	new1 = nullptr;
	return (new1);
}

void	ponyOnTheStack(std::string name, std::string color, int age)
{
	Pony	new1(name, color, age);
	
	std::cout << "I am "  << new1.get_color() << " " << new1.get_name() << " My age is " << new1.get_age() << '\n'; 
	new1.set_name("Ragnarson");
	new1.set_color("Black");
	new1.set_age(30);
	std::cout << "Now my name is " << new1.get_name() << " because now my age is " << new1.get_age() << " years old\n";
}

int		main()
{
	Pony	*ponyHeap;

	ponyHeap = ponyOnTheHeap("Alfred", "Grey", 8);
	if (!ponyHeap)
	{
		std::cout << "ponyHeap is nullptr" << '\n';
		return (0);
	}
	ponyOnTheStack("Ragnar", "Red", 6);
	return (0);
}