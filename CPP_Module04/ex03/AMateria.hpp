/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:59:49 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:33:22 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria {
	private:
		std::string type;
		unsigned int _xp;
		AMateria(); /* canon 1 */
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &am); /* canon 2 */
		
		virtual ~AMateria(); /* canon 3 */

		std::string const & getType() const;
		unsigned int getXP() const;

		void setType(std::string const &type);
		void setXP(unsigned int xp);
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

		AMateria &operator=(AMateria const &am); /* canon 4 */
};

#endif
