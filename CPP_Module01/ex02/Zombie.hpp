/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:58:03 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 02:15:59 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	private:
		std::string type;
		std::string name;
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();
		void announce(void);
};

#endif