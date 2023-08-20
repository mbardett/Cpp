/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:12:57 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/20 14:56:19 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//adding static because
static Fixed myFabs(Fixed source)
{
	if (source < 0)
		return (source * -1);
	return(source);
}

//adding static because
static Fixed myArea(Point const a, Point const b, Point const c)
{
	return (((a.getX().toFloat() * ( b.getY().toFloat() - c.getY().toFloat())) +
             (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
             (c.getX().toFloat() * ( a.getY().toFloat() - b.getY().toFloat()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	abcArea = myFabs(myArea(a,b,c));
	Fixed	abpArea = myFabs(myArea(a,b,p));
	Fixed	acpArea = myFabs(myArea(a,c,p));
	Fixed	bcpArea = myFabs(myArea(b,c,p));

	return(abcArea == abpArea + acpArea + bcpArea);
}
