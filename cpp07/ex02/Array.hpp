/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:09:17 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/29 17:34:44 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <stdlib.h>
# include <string>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <numeric>
# include <complex>

template <typename T>
class Array
{
	private:
			size_t _n;
			T *_elements;
	public:
			Array() : _n(0), _elements(new T()) {std::cout << "Default Constructor called" << std::endl;}
			Array<T>(size_t n):_n(n), _elements(new T[n]) 
				{ 
					for(size_t i = 0; i < _n; i++)	{
						_elements[i] = 0;
					// std::cout <<"CURRENT VALUES FOR _ELEMENTS AND _N " << *_elements << "  " << _n <<std::endl;
				 }
				}
			~Array() {std::cout << "Destructor called" << std::endl; if (_elements != NULL)	delete[]_elements;}
			//deleting this from Array<T>(const Array &src) ==== _elements(new T(src._n)),
			Array(const Array  &src) :_n(src._n) { for(size_t i = 0; i < _n; i++)	{
					_elements[i] = src._elements[i];
					// std::cout <<"CURRENT VALUES FOR _ELEMENTS AND _N " << *_elements << "  " << _n <<std::endl;
				 }
				}
			T &operator[](size_t index) { if (index < 0 || index >= size())	( throw std::out_of_range("Index out of bounds")); return (_elements[index]);}
			const T& operator[](size_t index) const { if (index >= size())	throw std::out_of_range("Index out of bounds");return _elements[index];}
			Array &operator=(const Array &src) { 
				if (this != &src) 
				{
					(_n > 0) ? delete [] _elements : delete _elements;

			
					_n = src.size();
					_elements = new T[src.size()];
					for (size_t i = 0; i < src.size(); i++) 
					{ 
						_elements[i] = src._elements[i];
					} 
					std::cout << "Assignment Operator called"<< std::endl;
				}
				return *this;
			}
			size_t size() const {return (_n);}
			void addToArray(T value, size_t index) { if (index >= size())	throw std::out_of_range("Index out of bounds");_elements[index] = value;}
	};

//* it would be almost needed to also have
// a second operator[] that's const and returns const T &
// because
// It just allows you to call [] on const objects/references to read the values.

//** the [] operator MIGHT accept negative values as long as 
//they are inside the array range, check link below.
// https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

#endif