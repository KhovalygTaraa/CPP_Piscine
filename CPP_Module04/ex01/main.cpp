/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:37:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 17:52:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
}

// int main()
// {
// 	Character *hero = new Character("HERO");
// 	Character *god = new Character("GOD");
// 	Character *clone = new Character(*hero);

// 	std::cout << '\n' << *hero;
// 	std::cout << *god;
// 	std::cout << *clone << '\n';

// 	*clone = *god;
// 	std::cout << *clone << '\n';
// 	// AWeapon *weapon = new AWeapon("ffsd", 12); // проверка на абстрактный класс
// 	// Enemy *enemy = new Enemy(400, "TROL"); // проверка на не абстракность
// 	// enemy->takeDamage(200);
// 	AWeapon *w1 = new PlasmaRifle();
// 	Enemy *mutant = new SuperMutant();
// 	Enemy *mutant2 = new SuperMutant();
// 	hero->equip(w1);
// 	std::cout << *hero << '\n';
// 	hero->attack(mutant);
// 	hero->attack(mutant);
// 	hero->attack(mutant);
// 	hero->attack(mutant);

// 	std::cout << '\n' << *hero;
// 	hero->recoverAP();
// 	std::cout << *hero;
// 	hero->recoverAP();
// 	hero->recoverAP();
// 	std::cout << *hero;

// 	AWeapon *w2 = new PowerFist();
// 	hero->equip(w2);
// 	std::cout << *hero;
// 	hero->attack(mutant);
// 	hero->attack(mutant);
// 	std::cout << *hero;
// 	hero->attack(mutant2);
// 	hero->attack(mutant2);
// 	hero->attack(mutant2);
// 	hero->attack(mutant2);
// 	std::cout << *hero;
// 	hero->attack(mutant2);
// 	hero->attack(mutant2);
// }
