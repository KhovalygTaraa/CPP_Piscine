/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:01:46 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:16:50 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		Zombie *randomChump();
};

#endif