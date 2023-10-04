/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:27:34 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 20:03:49 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

	Point inside(3.0, 2.0);
	Point outside(7.0, 6.0);
	Point edge(3.0, 0.0);
	Point vertex(3.0, 5.0);
	Point a(0.0, 0.0);
	Point b(6.0, 0.0);
	Point c(3.0, 5.0);

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
