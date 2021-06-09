/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 06:54:18 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/21 01:41:34 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <vector>
# include <stack>
# include <deque>
# include <list>

template<class T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
	public:
		MutantStack(): std::stack<T>(){}; /* Canon 1 */
		MutantStack(const MutantStack<T> &m): std::stack<T>(m){};  /* Canon 2 */
		virtual ~MutantStack(){};  /* Canon 3 */
		MutantStack<T> &operator=(const MutantStack<T> &m)  /* Canon 4 */
		{
			std::stack<T>::operator=(m);
			return (*this);
		};
		
		iterator begin(void)
		{
			return (this->c.begin());
		}
		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif
