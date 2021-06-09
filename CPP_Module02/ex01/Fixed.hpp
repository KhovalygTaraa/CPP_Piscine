/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:48:13 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/02 02:49:06 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed {
	private:
		int	fpv;
		static const int nofb = 8;
	public:
		Fixed();
		Fixed(const int integer);
		Fixed(const float floatP);
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &right);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &strm, const Fixed &fixed);

#endif