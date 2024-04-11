/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:31:16 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/29 13:51:34 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point(void);

		Point &operator=(const Point &copy);

		float getX(void) const;
		float getY(void) const;
};

#endif
