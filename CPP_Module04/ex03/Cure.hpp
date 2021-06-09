/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:25:50 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:34:01 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(); /* canon 1 */
		Cure(Cure const &c); /* canon 2 */
		~Cure(); /* canon 3 */
		Cure &operator=(Cure const &c); /* canon 4 */
		AMateria* clone() const;
		void use(ICharacter &target);
};	

#endif
