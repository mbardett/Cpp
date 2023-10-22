/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:22:54 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/22 15:11:00 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

# define N 5


// class Awesome{
// 	public:
// 		Awesome():_n(42) {return;}
// 		int get() const {return this->_n;}
// 	private:
// 		int _n;
// };
// std::ostream &operator<<(std::ostream &o, Awesome const &rhs) {o << rhs.get();return o;}
// template<typename T>
// void print(T const & x){std::cout << x << std::endl; return;}
int main()
{

// int tab[] = {0, 1, 2, 3, 4};
// Awesome tab2[5];
// iter(tab, 5, print<int>);
// iter(tab2, 5, print<Awesome>);
	int arr1[] = { 1, 2, 3, 4, 5 };

	std::cout << "Array 1: " << std::endl;
	iter( arr1, N, myPrint<int> );

	double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << "\nArray 2: "<< std::endl;
	iter( arr2, N, myPrint<double> );

	char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

	std::cout << "\nArray 3: "<< std::endl;
	iter( arr3, N, myPrint<char> );

	std::string arr4[] = { "one", "two", "three", "four", "five" };

	std::cout << "\nArray 4: "<< std::endl;
	iter( arr4, N, myPrint<std::string> );
	std::cout << std::endl;

	return 0;
}