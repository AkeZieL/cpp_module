/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:44:40 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/24 15:03:20 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory adress of the string: " << &str << std::endl;
	std::cout << "Memory adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory adress of stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
	
}
