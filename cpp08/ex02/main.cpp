/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:05:41 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/03 23:03:47 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "pushing numbers f and 11" << std::endl;
	mstack.push(4);
	mstack.push(11);
	std::cout << "Current size is " << mstack.size() << std::endl;
	std::cout << "Top number: "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	mstack.push(1);
	mstack.push(5);
	mstack.push(666);
	mstack.push(6);
	mstack.push(7);
	mstack.push(2);
	mstack.push(71);
	mstack.push(8);
	mstack.push(69);
	mstack.push(46);
	mstack.push(4);
	mstack.push(42);
	mstack.push(84);
	mstack.push(37);
	mstack.push(77);
	mstack.push(73);
	mstack.push(0);
	std::cout <<"STACK SIZE IS "<< mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Size after modifing " << mstack.size() << std::endl;
	return 0;
}