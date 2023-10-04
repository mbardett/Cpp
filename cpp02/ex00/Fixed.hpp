/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:11:44 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 20:11:14 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>


//_fractionalBits must be static (because we are dealing with c++98...), otherwise a
//"in-class initialization of non-static data member is a C++11 exension" WILD ERROR APPEARS
class Fixed
{
	private:
		int _fixedNumValue;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &source);
		Fixed &operator=(const Fixed &source);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
}; 

#endif
