/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:28:33 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:33:45 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		int count;
		std::string name;
		AMateria *inventory[4];
		Character(); /* canon 1 */
	public:
		Character(std::string name);
		~Character(); /* canon 2 */
		Character(Character const &c); /* canon 3 */
		Character &operator=(Character const &c); /* canon 4 */
		std::string const & getName() const;
		int getCount() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};	

#endif
