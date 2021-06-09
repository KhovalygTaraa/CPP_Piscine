/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:53:50 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/17 22:20:04 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

// class Awesome
// {
// 	private:
// 		int _n;

// 	public:
// 		Awesome(int n): _n(n) {};
// 		bool	operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
// 		bool	operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
// 		bool	operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
// 		bool	operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
// 		bool	operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
// 		bool	operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
// 		int		getN() const {return (_n);}
// };
// std::ostream    &operator<<(std::ostream &o, const Awesome &rhs) {o << rhs.getN(); return o;}

template <typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T const &max(T const &x, T const &y)
{
	if (x <= y)
		return (y);
	else
		return (x);
}

template <typename T>
T const &min(T const &x, T const &y)
{
	if (x >= y)
		return (y);
	else
		return (x);
}

#endif
