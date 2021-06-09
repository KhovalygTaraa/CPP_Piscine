/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 00:41:06 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/01 00:50:03 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		const std::string &getType();
		void setType(std::string type);
};

#endif