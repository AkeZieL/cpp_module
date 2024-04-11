/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:19:47 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/17 11:48:09 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

template <typename T>
void printSpan(T &to_print) {
	std::cout << to_print  << std::endl;
};

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(8);
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	Span sp2 = Span(10000);
	try {
		sp2.shortestSpan();
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		sp2.fillRandomly(10000);
	//	sp2.printVector();
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	Span sp3;

	try {
		sp3.printVector();
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
