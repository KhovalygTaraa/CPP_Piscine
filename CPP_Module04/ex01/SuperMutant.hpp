/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:40:19 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:52:11 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant: public Enemy {
	public:
		SuperMutant(); /* canon 1 */
		SuperMutant(const SuperMutant &s); /* canon 2 */
		virtual ~SuperMutant(); /* canon 3 */
		SuperMutant &operator=(const SuperMutant &s); /* canon 4 */
		void takeDamage(int damage);
};

#endif
