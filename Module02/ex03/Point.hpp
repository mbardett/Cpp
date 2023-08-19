/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:48:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 22:53:57 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#pragma once
# include <iostream>
# include "Fixed.hpp"
# include <cmath>

class Point
{
	public:

		Point(void);		
		Point(const Point &source);
		Point &operator=(const Point &source);
		~Point();

		Point(Fixed x, Fixed y);
		Point(const float x, const float y);		
		bool operator==(const Point &p1) const;		
		Fixed getX() const;
		Fixed getY() const;		

	private:
	
		Fixed x;
		Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif