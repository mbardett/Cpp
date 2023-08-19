/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:27:34 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 22:22:54 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

	Point inside(7.78, 2.38);
	Point outside(4.72, 0.24);
	Point edge(10.85, 1.96);
	Point vertex(4.6, -1.02);
	Point a(4.6, -1.02);
	Point b(6.3, 4.38);
	Point c(12.14, 2.58);

	std::cout << "VERTICES OF THE TRIANGLE" << std::endl;
	std::cout << "(" << a.getX() << ";" << a.getY() << ")" << std::endl;
	std::cout << "(" << b.getX() << ";" << b.getY() << ")" << std::endl;
	std::cout << "(" << c.getX() << ";" << c.getY() << ")" << std::endl << std::endl;

	std::cout << std::boolalpha;
	std::cout << "INSIDE" << std::endl;
	std::cout << "(" << inside.getX() << ";" << inside.getY() << ")" << std::endl;
	std::cout << "BSP RESULT: " << bsp(a, b, c, inside) << std::endl << std::endl;;

	std::cout << "OUTSIDE" << std::endl;
	std::cout << "(" << outside.getX() << ";" << outside.getY() << ")" << std::endl;
	std::cout << "BSP RESULT: " << bsp(a, b, c, outside) << std::endl << std::endl;;

	std::cout << "EDGE" << std::endl;
	std::cout << "(" << edge.getX() << ";" << edge.getY() << ")" << std::endl;
	std::cout << "BSP RESULT: " << bsp(a, b, c, edge) << std::endl << std::endl;


	std::cout << "VERTEX" << std::endl;
	std::cout << "(" << vertex.getX() << ";" << vertex.getY() << ")" << std::endl;
	std::cout << "BSP RESULT: " << bsp(a, b, c, vertex) << std::endl;

	return 0;
}