/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:40:28 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/11 01:51:59 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion: public Enemy {
	public:
		RadScorpion(); /* canon 1 */
		RadScorpion(const RadScorpion &s); /* canon 2 */
		virtual ~RadScorpion(); /* canon 3 */
		RadScorpion &operator=(const RadScorpion &s); /* canon 4 */
};

#endif
