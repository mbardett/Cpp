/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:12:57 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 23:16:45 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"



float area(Point const a, Point const b, Point const c)
{
    return 0.5 * fabs(
		(a.getX().toFloat()*(b.getY().toFloat()-c.getY().toFloat()) 
		+ b.getX().toFloat()*(c.getY().toFloat()-a.getY().toFloat()) 
		+ c.getX().toFloat()*(a.getY().toFloat()-b.getY().toFloat())));
}

// //adding static because
// static Fixed myFabs(Fixed source)
// {
// 	if (source < 0)
// 		return (source * -1);
// 	return(source);
// }

// //adding static because
// static Fixed myArea(Point const a, Point const b, Point const c)
// {
// 	return (((a.getX() * ( b.getY() - c.getY())) +
//              (b.getX() * (c.getY() - a.getY())) +
//              (c.getX() * ( a.getY() - b.getY()))) / 2);
// }

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float total;
	float ar = area(a, b, c); 
	float ar_1 = area(point, b, c);
	float ar_2 = area(a, point, c);
	float ar_3 = area(a, b, point);

	if (point == a || point == b || point == c)
        return (false);
    if (ar_1 == 0 || ar_2 == 0 || ar_3 == 0)
        return (false);
    total = ar_1 + ar_2 + ar_3;
    if (fabs(ar - total) < 0.000001)
        return (true);
    return (false);
}

// bool bsp(Point const a, Point const b, Point const c, Point const p)
// {
// 	Fixed	abcArea = myFabs(myArea(a,b,c));
// 	Fixed	abpArea = myFabs(myArea(a,b,p));
// 	Fixed	acpArea = myFabs(myArea(a,c,p));
// 	Fixed	bcpArea = myFabs(myArea(b,c,p));

// 	return(abcArea == abpArea + acpArea + bcpArea);
// }