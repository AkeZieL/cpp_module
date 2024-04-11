/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:36:50 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/29 13:51:39 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0) {
};

Point::Point(const float x, const float y) : _x(x), _y(y) {
};

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY()){
};

Point::~Point(void){
};

Point &Point::operator=(const Point &copy){
	if (this != &copy)
		*this = copy;
	return *this;
};

float Point::getX(void) const {
	return (this->_x.toFloat());
};

float Point::getY(void) const {
	return (this->_y.toFloat());
};
