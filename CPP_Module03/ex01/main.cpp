/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:55:32 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 18:42:11 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	/* 
	**	Проверка конструктора копирования - Andrew!
	**	Проверка оператора присваивания - Tom!
	**	Проверка энергии - Megatron!
	*/

	// FragTrap Andrew("Andrew");
	// FragTrap Bob(Andrew);

	FragTrap Bob("Bob");
	ScavTrap Donald("Donald");
	Donald.challengeNewcomer();
	Donald.challengeNewcomer();
	Donald.challengeNewcomer();
	// FragTrap Tom("Tom");
	Bob.meleeAttack("Optimus");
	Bob.rangedAttack("Bamblbi");
	Bob.takeDamage(50);
	// Bob = Tom;
	Bob.beRepaired(10);
	Bob.meleeAttack("Wall");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	return (0);
}
