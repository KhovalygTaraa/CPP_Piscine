/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:55:32 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 23:35:14 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{

	FragTrap Bob("Bob");
	ScavTrap Donald("Donald");
	ClapTrap Worm("Worm");
	NinjaTrap Killer("Killer");
	NinjaTrap Swift("Swift");

	Killer.ninjaShoebox(Swift);
	Killer.ninjaShoebox(Worm);
	Killer.ninjaShoebox(Donald);
	Killer.ninjaShoebox(Bob);

	Killer.takeDamage(60);
	return (0);
}
