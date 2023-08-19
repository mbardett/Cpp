/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:48:05 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 22:51:55 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void)
{
	this->x = 0;
	this->y = 0;
}

Point::Point(Fixed x, Fixed y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &source)
{
	*this = source;
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}


Point &Point::operator=(const Point &source)
{
	this->x = source.x;
	this->y = source.y;
	return (*this);
}

bool Point::operator==(const Point &p1) const
{
	if (this->getX() == p1.x && this->getX() == p1.y)
		return (true);
	return (false);
}

Point::~Point(void)
{}


