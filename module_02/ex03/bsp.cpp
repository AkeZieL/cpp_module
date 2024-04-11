/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:35:24 by mbilly            #+#    #+#             */
/*   Updated: 2023/10/15 15:33:32 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float getScalaire(Point first, Point second)
{
	return (first.getX() * second.getY() - first.getY() * second.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Point vect_AB(b.getX() - a.getX(), b.getY() - a.getY());
	Point vect_AC(c.getX() - a.getX(), c.getY() - a.getY());
	Point vect_APoint(point.getX() - a.getX(), point.getY() - a.getY());

	Point vect_BA(a.getX() - b.getX(), a.getY() - b.getY());
	Point vect_BC(c.getX() - b.getX(), c.getY() - b.getY());
	Point vect_BPoint(point.getX() - b.getX(), point.getY() - b.getY());

	Point vect_CA(a.getX() - c.getX(), a.getY() - c.getY());
	Point vect_CB(b.getX() - c.getX(), b.getY() - c.getY());
	Point vect_CPoint(point.getX() - c.getX(), point.getY() - c.getY());

	float tmp1 = getScalaire(vect_AB, vect_APoint) * getScalaire(vect_APoint, vect_AC);
	float tmp2 = getScalaire(vect_BA, vect_BPoint) * getScalaire(vect_BPoint, vect_BC);
	float tmp3 = getScalaire(vect_CA, vect_CPoint) * getScalaire(vect_CPoint, vect_CB);

	return (tmp1 > 0 && tmp2 > 0 && tmp3 > 0);
};
