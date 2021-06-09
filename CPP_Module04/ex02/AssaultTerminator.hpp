/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:39:59 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:50:01 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	public:
		AssaultTerminator(); /* canon 1 */
		AssaultTerminator(AssaultTerminator const &a); /* canon 2 */
		~AssaultTerminator(); /* canon 3 */
		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		AssaultTerminator &operator=(AssaultTerminator const &t); /* canon 4 */
};

#endif
