/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:50:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/30 17:48:21 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//custom Base class for testing
// class Base
// {
// 	public:
// 			Base(int n);
// 			Base();
// 			Base(Base & cpy);
// 			~Base();
// 			int getN() const;
// 			void setN(int n);
// 			Base&	operator=(Base & rhs);
// 			const Base&	operator=(const Base & rhs);
// 			Base&	operator+=(Base & rhs);
// 			Base&	operator+=(int rhs);

// 			bool	operator==(Base const & rhs) const;
// 			bool	operator!=(Base const & rhs) const;
// 			bool	operator>(Base const & rhs) const;
// 			bool	operator<(Base const & rhs) const;
// 			bool	operator>=(Base const & rhs) const;
// 			bool	operator<=(Base const & rhs) const;

// 	private:
// 			int _n;
// };

// std::ostream&	operator<<(std::ostream& stream, const Base & obj);


// 	Base::Base  () :_n(std::rand() %10) {}
// 	Base::Base  (int n) : _n(n) {}
// 	Base::Base  (Base & cpy): _n(cpy.getN()) {*this = cpy;}
// 	Base::~Base () {}

// 	int Base::getN  () const {return this->_n;}
// 	void Base::setN  (int n) {this->_n = n;}

// 	Base&	Base::operator=(Base & rhs) {_n = rhs.getN();return *this;}
// 	const Base&	Base::operator=(const Base & rhs) {_n = rhs.getN();return *this;}
// 	Base&	Base::operator+=(Base & rhs) {_n = _n + rhs.getN();return *this;}
// 	Base&	Base::operator+=(int rhs) {_n = _n + rhs;return *this;}
// 	bool	Base::operator==(Base const & rhs) const {return (this->_n == rhs.getN());}
// 	bool	Base::operator!=(Base const & rhs) const {return (this->_n != rhs.getN());}
// 	bool	Base::operator>(Base const & rhs) const {return (this->_n > rhs.getN());}
// 	bool	Base::operator<(Base const & rhs) const {return (this->_n < rhs.getN());}
// 	bool	Base::operator>=(Base const & rhs) const {return (this->_n >= rhs.getN());}
// 	bool	Base::operator<=(Base const & rhs) const {return (this->_n <= rhs.getN());}

// std::ostream&	operator<<(std::ostream& stream, const Base & obj)
// {
// 	stream << obj.getN();
// 	return stream;
// }

int main()
{
	Array<int> first(3);
	Array<int> second;
	std::cout << "\033[38;5;46mPrinting empty array"<< std::endl;
	for(size_t i = 0; i < first.size() ; i++)
	{
		// std::cout << "index "<< i << " , in array of size  "<< first.size() << std::endl;
		std::cout << first[i] << std::endl;
	}
	std::cout << "\033[0m"<<std::endl;
	for(size_t i = 0; i < first.size(); i++)
		first.addToArray(6, i);
	std::cout << "\033[38;5;123mPrinting first Array after storing values"<< std::endl;
	for(size_t i = 0; i < first.size(); i++)
		std::cout << first[i] << std::endl;
	std::cout << "\033[0m" <<std::endl;
	second = first;
	std::cout << "\033[38;5;160mPrinting second Array after copy BEFORE storing values\033[0m"<< std::endl;
	for(size_t i = 0; i < second.size(); i++)
		std::cout << "\033[38;5;160m" << second[i] << "\033[0m" << std::endl;
	for(size_t i = 0; i < first.size(); i++)
		second.addToArray(second[i] + 6, i);
	std::cout << "\033[38;5;211mPrinting second Array after storing values"<< std::endl;
	for(size_t i = 0; i < first.size(); i++)
		std::cout << second[i] << std::endl;
	std::cout << "\033[0m" << std::endl;


	
	// std::cout << "\033[38;5;46mTESTING WITH CUSTOM CLASS" << std::endl;

	// Array<Base> a(5);
	// std::cout << "A:" << std::endl;
	// for (size_t i = 0; i < a.size(); i++)
	// 	a[i] = i;
	// for (size_t i = 0; i < a.size(); i++)
	// 	std::cout << "at index "<< i << " = " << a[i] << std::endl;
	// std::cout << "\033[0m" << std::endl;
	// std::cout << "\033[38;5;211mTEST for copy of complex type" << std::endl;
	// Array<Base> b;
	// b = a;
	// for (size_t i = 0; i < a.size(); i++)
	// 	std::cout << "B at index "<< i << " = " << b[i] << std::endl;
	// std::cout << "\033[0m" << std::endl;
}