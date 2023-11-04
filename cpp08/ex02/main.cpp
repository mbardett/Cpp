/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:05:41 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/04 16:29:07 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	// std::cout << "pushing numbers f and 11" << std::endl;
	// mstack.push(4);
	// mstack.push(11);
	// std::cout << "Current size is " << mstack.size() << std::endl;
	// std::cout << "Top number: "<< mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << "Size after pop: " << mstack.size() << std::endl;
	// mstack.push(1);
	// mstack.push(5);
	// mstack.push(666);
	// mstack.push(6);
	// mstack.push(7);
	// mstack.push(2);
	// mstack.push(71);
	// mstack.push(8);
	// mstack.push(69);
	// mstack.push(46);
	// mstack.push(4);
	// mstack.push(42);
	// mstack.push(84);
	// mstack.push(37);
	// mstack.push(77);
	// mstack.push(73);
	// mstack.push(0);
	// std::cout <<"STACK SIZE IS "<< mstack.size() << std::endl;
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::cout << "Size after modifing " << mstack.size() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "current top is"<< mstack.top() << std::endl;
	std::cout << "current size is " << mstack.size() << std::endl;
	mstack.pop();std::cout << "pop!" << std::endl;
	std::cout << "current size is " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "--"<< *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::list<int> testList;
	testList.push_back(5);
	testList.push_back(17);
	std::cout << "testList front is "<< testList.front() << std::endl;
	testList.pop_back();
	std::cout << "testList size is " << testList.size() << std::endl;
	testList.push_back(3);
	testList.push_back(5);
	testList.push_back(737);
	//[...]
	testList.push_back(0);
	std::list<int>::iterator myBegin = testList.begin();
	std::list<int>::iterator myEnd = testList.end();
	++myBegin;
	--myBegin;
	while (myBegin != myEnd)
	{
		std::cout << *myBegin << std::endl;
		++myBegin;
	}
	std::list<int> z(testList);
	std::cout <<"testList.myEnd = "<< *myEnd << std::endl;
	std::list<int>::iterator zEnd = z.end();
	std::cout << "z.myEnd = "<< *zEnd << std::endl;
	return 0;
}