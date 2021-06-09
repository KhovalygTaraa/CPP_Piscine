/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:21:07 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:51:24 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
// # include "RadScorpion.hpp"
// # include "SuperMutant.hpp"

class Enemy {
	private:
		int hp;
		std::string type;
		Enemy(); /* canon 1 */
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &e); /* canon 2 */
		virtual ~Enemy(); /* canon 3 */
		std::string const getType() const;
		int getHP() const;
		void setType(std::string type);
		void setHP(int hp);
		virtual void takeDamage(int b);
		Enemy &operator=(const Enemy &e); /* canon 4 */
};

#endif
