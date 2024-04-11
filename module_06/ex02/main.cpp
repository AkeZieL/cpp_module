/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:28:37 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/25 14:36:38 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int randomNbr(size_t min, size_t max) {
	srand(time(NULL));
	return ((rand() % max) + min);
};

Base *generate(void) {
	size_t nbr = randomNbr(1, 3);
	Base *base = NULL;

	if (nbr == 1)
		base = dynamic_cast<Base *>(new A);
	else if (nbr == 2)
		base = dynamic_cast<Base *>(new B);
	else if (nbr == 3)
		base = dynamic_cast<Base *>(new C);
	return (base);
};

void identify(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "is A class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "is B class" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "is C class" << std::endl;
};

void identify(Base &p) {
	if (dynamic_cast<A *>(&p))
		std::cout << "is A class" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "is B class" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "is C class" << std::endl;
};

int main (void) {
	Base *p;

	p = generate();

	std::cout << "pointer identify func" << std::endl;
	identify(p);
	std::cout << "reference identify func" << std::endl;
	identify(*p);
};
