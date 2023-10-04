/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:11:44 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 21:16:40 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>


//1): _fractionalBits must be static (because we are dealing with c++98...), otherwise a
//"in-class initialization of non-static data member is a C++11 exension" WILD ERROR APPEARS
//2):The subject for this ex01 demands to add an overload function of the "<<"(insertion) operator...
//In order to make such overload we either need to make it"friend"of the class or to declare 
//it as a global(== free/ non member) function. https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
//(another option would be to make it a member function but the subject prevents us from doing so)

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
		Fixed(const int inum);
		Fixed(const float fnum);
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat() const;
		int	toInt() const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &source);


#endif
