/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:28:53 by swquinc           #+#    #+#             */
/*   Updated: 2021/04/19 05:04:12 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include <iomanip>
# include <string>

template <class T>
class Array {
	private:
		T *array;
		unsigned int n;
	public:
		Array()  /* Coplien's form  1 */
		{
			this->array = new T();
			this->n = 0;
		};
		Array(unsigned int n)
		{
			this->array = new T(n);
			this->n = n;
		};
		Array(const Array &a)  /* Coplien's form  2 */
		{
			unsigned int	i;
			
			this->array = new T(a.n);
			for(i = 0; i != a.n; i++)
				this->array[i] = a.array[i];
			this->n = a.n;
		};
		~Array()  /* Coplien's form  3 */
		{
			delete [] this->array;
		};
		unsigned int size(void) const
		{
			return (this->n);
		};
		Array &operator=(const Array &a) /* Coplien's form  4 */
		{
			unsigned int i;
			
			if (this == &a)
				return (*this);
			delete [] this->array;
			this->array = NULL;
			this->array = new T(a.n);
			for(i = 0; i != a.n; i++)
				this->array[i] = a.array[i];
			this->n = a.n;
			return (*this);
		};
		T &operator[](const unsigned int i)
		{
			if (i >= n)
				throw std::exception();
			return (this->array[i]);
		}
};

#endif