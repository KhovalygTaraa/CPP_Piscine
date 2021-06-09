/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:55:32 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 17:36:33 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
