/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:13:06 by mbilly            #+#    #+#             */
/*   Updated: 2024/04/06 09:06:43 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc == 2) {
		std::string test = argv[1];

		ScalarConverter::convert(test);
	}
	else
		std::cerr << "Enter only 1 argument" << std::endl;
};
