/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:24:29 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:34:14 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria 
{
	public:
		Ice(); /* canon 1 */
		Ice(Ice const &c); /* canon 2 */
		~Ice(); /* canon 3 */
		Ice &operator=(Ice const &c); /* canon 4 */
		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif
