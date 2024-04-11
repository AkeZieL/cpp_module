/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:39:20 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/05 18:36:56 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cctype>

template <typename T>

void printAll(T &element) {
	std::cout << element << std::endl;
};

int main(void) {
	char tabChar[] = {'c', 't', 'b'};
	std::string tabStr[] = {"a", "test"};
	int tabInt[] = {5, 4 ,870, 56};

	::iter(tabChar, sizeof(tabChar) / sizeof(char), printAll<char>);
	std::cout << std::endl;
	::iter(tabStr, sizeof(tabStr) / sizeof(std::string), printAll<std::string>);
	std::cout << std::endl;
	::iter(tabInt, sizeof(tabInt) / sizeof(int), printAll<int>);
};
