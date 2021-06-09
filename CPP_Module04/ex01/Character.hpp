/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:40:38 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:51:05 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	private:
		std::string name;
		int			ap;
		AWeapon		*weapon;
		Character(); /* canon 1 */
	public:
		Character(std::string const & name);
		Character(Character const &c); /* canon 2 */
		~Character(); /* canon 3 */
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
		Character &operator=(Character const &c); /* canon 4 */
};

std::ostream &operator<<(std::ostream &strm, Character const &c);

#endif
