/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:27:34 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 21:55:59 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout << "a value, shifetd value" << std::endl;
std::cout << a.getRawBits() << std::endl;
std::cout << ((float)a.getRawBits() / (float)(1 << 8)) << std::endl;
std::cout << "b value, shifetd value" << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << ((float)b.getRawBits() / (float)(1 << 8)) << std::endl;
std::cout << "c value, shifetd value" << std::endl;
std::cout << c.getRawBits() << std::endl;
std::cout << ((float)c.getRawBits() / (float)(1 << 8)) << std::endl;
std::cout << "d value, shifetd value" << std::endl;
std::cout << d.getRawBits() << std::endl;
std::cout << ((float)d.getRawBits() / (float)(1 << 8)) << std::endl;
return 0;
}