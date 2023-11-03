/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:47:37 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/03 22:58:29 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <algorithm>
#include <list>
#include <exception>
#include <vector>
#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T> () {};
		MutantStack(const MutantStack &src): std::stack<T> (src) {};
		virtual ~MutantStack(){};

		MutantStack &operator=(const MutantStack &src) { if(this != &src)	std::stack<T>::operator=(src); return *this;}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin() {return std::stack<T>::c.begin();};
		iterator end() {return std::stack<T>::c.end();};
};
template <typename T>
std::ostream &operator<<(std::ostream &os,const MutantStack<T> &stack) {os << stack<< " "; return os;}
#endif