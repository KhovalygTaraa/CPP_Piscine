/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:24:58 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/08 18:56:44 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

// int main()
// {
// 	Sorcerer Merlin("Merlin", "FireHeart");
// 	std::cout << Merlin;

// 	Victim d1("Dovrt"); // создан Dovrt
// 	Victim d2(d1); // создан клон Dovrt

// 	Victim d3("ARGH"); // Создан ARGH
// 	d1 = d3; // Первый Dovrt превращен в ARGH

// 	Peon p1("Hallo");
// 	Peon p2(p1);

// 	Peon p3("ZORGO");
// 	p1 = p3;
// }

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}
