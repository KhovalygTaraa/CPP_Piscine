/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:19:49 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:50:38 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	public:
		TacticalMarine(); /* canon 1 */
		TacticalMarine(TacticalMarine const &t); /* canon 2 */
		virtual ~TacticalMarine(); /* canon 3 */
		ISpaceMarine* clone() const ;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		TacticalMarine &operator=(TacticalMarine const &t); /* canon 4 */
};

#endif
