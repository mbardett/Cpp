/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:09:17 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/27 16:51:31 by mbardett         ###   ########.fr       */
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


// it would be almost needed to also have
// a second operator[] that's const and returns const T &
// because
// It just allows you to call [] on const objects/references to read the values.

template <typename T>
class Array
{
	private:
			size_t _n;
			T *_elements;
	public:
			Array() : _n(0), _elements(new T[0]) {std::cout << "Default Constructor called" << std::endl;}
			Array(size_t n):_n(n), _elements(new T[n]) { for(size_t i = 0; i < this->_n; i++)	{this->_elements[n] = 0; std::cout <<"CURRENT VALUES FOR _ELEMENTS AND _N " << *_elements << "  " << _n <<std::endl;}}
			~Array() {std::cout << "Destructor called" << std::endl;delete[]_elements;}
			Array<T>(const Array<T>  &src) { *this == src; }
			Array<T> &operator=(const Array<T> &src) { if (this == &src) return *this; delete[] _elements;_n = src.size(); _elements = new T[src._n];
					for (size_t i = 0; i < this->_n; i++)
						this->_elements[i] = src._elements[i];
					std::cout << "Assignment Operator called"<< std::endl; return *this;}
			// Array<T> &operator=(const Array<T> &src) { 
			// 	if (this != &src) 
			// 	{
			// 		delete[]this->_elements;
			// 		this->_elements = new T[src._n];
			// 		for (size_t i = 0; i < this->_n; i++) 
			// 		{ 
			// 			this->_elements[i] = src._elements[i];
			// 		} 
			// 		std::cout << "Assignment Operator called"<< std::endl;
			// 	}; 
			// 	return *this;
			// }
			//the [] operator MIGHT accept negative values as long as 
			//they are inside the array range, check link below.
			T &operator[](size_t index) { if (index < 0 || index >= size())( throw std::out_of_range("Index out of bounds")); return (_elements[index]);}
			size_t size() const {return (_n);}
			void addToArray(T value, size_t index) { if (index >= size())	throw std::out_of_range("Index out of bounds");_elements[index] = value; std::cout << "ADDED "<< value << std::endl;}
	};

// https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

#endif