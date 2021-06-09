/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:19:56 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/10 15:40:14 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <unistd.h>

// int main()
// {
// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	ISquad* vlc = new Squad;
	
	
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	delete vlc;
// 	return 0;
// }

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jhon = new TacticalMarine;
	ISpaceMarine* barbara = new TacticalMarine;
	ISpaceMarine* sarah = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISpaceMarine* sam = new TacticalMarine;
	ISpaceMarine* leo = new TacticalMarine;
	ISpaceMarine* rosa = new TacticalMarine;
	ISpaceMarine* amanda = new TacticalMarine;
	ISpaceMarine* zeus = new AssaultTerminator;
	
	Squad* swift = new Squad;
	Squad* revenge = new Squad;

	swift->push(bob);
	swift->push(jhon);
	swift->push(barbara);
	swift->push(sarah);
	swift->push(jim);

	revenge->push(sam);
	revenge->push(leo);
	revenge->push(rosa);
	revenge->push(amanda);
	revenge->push(zeus);
	
	*swift = *revenge;
	Squad* olimp = new Squad(*swift);
	std::cout << olimp->getCount() << std::endl;
	delete olimp;
	delete swift;
	delete revenge;
	return (0);
}
