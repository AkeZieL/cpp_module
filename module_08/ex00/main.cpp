/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:54:09 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/14 14:21:18 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void) {
	std::vector<int> vect;	
	try {
		vect.push_back(1);
		vect.push_back(2);
		vect.push_back(3);
		vect.push_back(4);
		vect.push_back(5);
		std::vector<int>::iterator it_vect1 = easyfind(vect, 3);
		std::cout << "Number found at position: " << std::distance(vect.begin(), it_vect1) << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it_vect2 = easyfind(vect, 6);
		std::cout << "Number found at position:" << std::distance(vect.begin(), it_vect2) << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
};
