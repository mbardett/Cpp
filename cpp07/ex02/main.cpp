/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:50:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 22:48:13 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> first(3);
	Array<int> second;
	std::cout << "\033[38;5;46mPrinting empty array"<< std::endl;
	for(size_t i = 0; i < first.size(); i++)
		std::cout << first[i] << std::endl;
	std::cout << "\033[0m"<<std::endl;
	for(size_t i = 0; i < first.size(); i++)
		first.addToArray(6, i);
	std::cout << "\033[38;5;123mPrinting first Array after storing values"<< std::endl;
	for(size_t i = 0; i < first.size(); i++)
		std::cout << first[i] << std::endl;
	std::cout << "\033[0m" <<std::endl;
	second = first;
	for(size_t i = 0; i < first.size(); i++)
		second.addToArray(second[i] + 6, i);
	std::cout << "\033[38;5;211mPrinting second Array after storing values"<< std::endl;
	for(size_t i = 0; i < first.size(); i++)
		std::cout << second[i] << std::endl;
	std::cout << "\033[0m" << std::endl;


	
	Array<double> third(3);
	Array<double> fourth;
	std::cout << "\033[38;5;46mPrinting empty third array"<< std::endl;
	for(size_t i = 0; i < third.size(); i++)
		std::cout << std::fixed << std::setprecision(2)<< third[i] << std::endl;
	std::cout << "\033[0m"<<std::endl;
	for(size_t i = 0; i < third.size(); i++)
		third.addToArray(66.6, i);
	std::cout << "\033[38;5;123mPrinting third Array after storing values"<< std::endl;
	for(size_t i = 0; i < third.size(); i++)
		std::cout << std::fixed << std::setprecision(2) << third[i] << std::endl;
	std::cout << "\033[0m" <<std::endl;
	fourth = third;
	for(size_t i = 0; i < fourth.size(); i++)
		fourth.addToArray((fourth[i] + 33.3), i);
	std::cout << "\033[38;5;211mPrinting fourth Array after storing values"<< std::endl;
	for(size_t i = 0; i < fourth.size(); i++)
		std::cout << std::fixed << std::setprecision(2) << fourth[i] << std::endl;
	std::cout << "\033[0m" << std::endl;
}