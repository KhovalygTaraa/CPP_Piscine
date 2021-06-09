/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:09:01 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/09 16:41:16 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
// # include "PlasmaRifle.hpp"
// # include "PowerFist.hpp"

class AWeapon
{
	private:
		std::string name;
		int damage;
		int ap;
		AWeapon(); /* canon 1 */
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &w); /* canon 2 */
		virtual ~AWeapon(); /* canon 3 */
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		void setName(std::string name);
		void setAPCost(int ap);
		void setDamage(int damage);
		virtual void attack() const = 0;
		AWeapon& operator=(const AWeapon &w); /* canon 4 */
};

#endif
