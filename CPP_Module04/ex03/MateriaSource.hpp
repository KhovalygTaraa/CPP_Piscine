/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:34:09 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:35:07 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int count;
		AMateria *knowns[4];
	public:
		MateriaSource(); /* canon 1 */
		MateriaSource(MateriaSource const &m); /* canon 2 */
		~MateriaSource(); /* canon 3 */
		MateriaSource &operator=(MateriaSource const &m); /* canon 4 */
		
		void learnMateria(AMateria *a);
		AMateria* createMateria(std::string const & type);

		int getCount(void) const;
};

#endif
