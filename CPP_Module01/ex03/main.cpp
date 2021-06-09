/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:14:46 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:48:17 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	Zombie boss("redhead", "BOSS");
	boss.announce();
	ZombieHorde chaos(2);
	chaos.announce();
	return (0);
}