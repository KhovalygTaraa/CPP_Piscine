/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:53:59 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:36:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		std::string	type;
		Zombie		*horde;
		int			size;

	public:
		ZombieHorde(int N);
		ZombieHorde();
		~ZombieHorde();
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		void announce(void);
};

#endif 