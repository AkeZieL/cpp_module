/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:24 by mbilly            #+#    #+#             */
/*   Updated: 2023/10/30 13:59:50 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a;
	Point const b(10, 0);
	Point const c(0, 10);
	Point const point(5.00f, 5.00f);
	Point copy(c);

	std::cout << "a_x = " << a.getX() << " a_y = " << a.getY() << std::endl;
	std::cout << "b_x = " << b.getX() << " b_y = " << b.getY() << std::endl;
	std::cout << "c_x = " << c.getX() << " c_y = " << c.getY() << std::endl;
	std::cout << "Copy_x = " << copy.getX() << " copy_y = " << copy.getY() << std::endl;
	std::cout << "point_x = " << point.getX() << " point_y = " << point.getY() << std::endl << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "Le point est dans le triangle" << std::endl;
	else
		std::cout << "Le point n'est pas dans le triangle" << std::endl;

	return 0;
}
