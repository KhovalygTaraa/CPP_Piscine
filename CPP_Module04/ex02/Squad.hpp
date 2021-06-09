/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:15:38 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:50:24 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad: public ISquad {
	private:
		int count;
		ISpaceMarine **units;
	public:
		Squad(); /* canon 1 */
		Squad(Squad const &s); /* canon 2 */
		virtual ~Squad(); /* canon 3 */
		int getCount() const;
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine* s);
		Squad &operator=(const Squad &s); /* canon 4 */
};

#endif
