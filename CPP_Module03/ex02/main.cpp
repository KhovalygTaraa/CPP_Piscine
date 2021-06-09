/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:55:32 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 23:38:37 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap Bob("Bob");
	ScavTrap Donald("Donald");
	Donald.challengeNewcomer();
	Donald.challengeNewcomer();
	Donald.challengeNewcomer();

	Bob.meleeAttack("Optimus");
	Bob.rangedAttack("Bamblbi");
	Bob.takeDamage(50);
	Bob.beRepaired(10);
	Bob.meleeAttack("Wall");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	Bob.vaulthunter_dot_exe("Megatron");
	return (0);
}
