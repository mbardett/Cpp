/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:11:44 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 21:37:39 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>


//1): _fracionalBits must be static (because we are dealing with c++98...), otherwise a
//"in-class initialization of non-static data member is a C++11 exension" WILD ERROR APPEARS
//2):The subject for ex01 demands to add an overload function of the "<<"(insertion) operator...
//In order to make such overload we either need to make it"friend"of the class or to declare 
//it as a global(== free/ non member) function. https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
//(another option would be to make it a member function but the subject prevents us from doing so)
//3)The subject for ex02 demands to overload several operators and add 4 STATIC MEMBER FUNCTIONS.
//	from geeksforgeeks.org/cpp-static-data-members/ and 
//	https://www.geeksforgeeks.org/static-member-function-in-cpp/ :
//	only one copy of a static member is created and shared by all the objs of that class; it is
//	initialized before any object is created and beforer the main starts.It lives for as long as the program does
//	but it is visible only within the class.
//	Static members are only declared in a class declaration, not defined. 
//	They must be explicitly defined outside the class using the scope resolution operator.
// -A static member function is independent of any object of the class. 
// -A static member function can be called even if no objects of the class exist.
// -A static member function can also be accessed using the class name through the scope resolution operator.
// -A static member function can access static data members and static member functions inside or outside of the class.
// -Static member functions have a scope inside the class and cannot access the current object pointer.
// -You can also use a static member function to determine how many objects of the class have been created.
// -The reason we need Static member function:
// 	Static members are frequently used to store information that is shared by all objects in a class. 
// 	For instance, you may keep track of the quantity of newly generated objects of a specific class
// 	type using a static data member as a counter. This static data member can be increased each time an 
// 	object is generated to keep track of the overall number of objects.

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
		
		Fixed operator+(const Fixed &source);
		Fixed operator-(const Fixed &source);
		Fixed operator*(const Fixed &source);
		Fixed operator/(const Fixed &source);
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();
		bool operator>(const Fixed &source);
		bool operator<(const Fixed &source);
		bool operator>=(const Fixed &source);
		bool operator<=(const Fixed &source);
		bool operator==(const Fixed &source);
		bool operator!=(const Fixed &source);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &output, const Fixed &source);


#endif