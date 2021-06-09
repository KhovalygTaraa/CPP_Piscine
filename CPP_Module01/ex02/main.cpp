/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:14:46 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:20:04 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	int		i;
	ZombieEvent chaos;
	Zombie *zombie[10];
	
	chaos.setZombieType("blackheads");
	for(i = 0; i < 10; i++)
		zombie[i] = chaos.randomChump();
	for(i = 0; i < 10; i++)
		delete(zombie[i]);
	return (0);
}