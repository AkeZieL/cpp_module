/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:04:53 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/08 07:09:56 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook book;
	std::string user_input = "";

	book.how_to_use();
	while (user_input.compare("EXIT"))
	{
		if (user_input.compare("ADD") == 0)
			book.add_contact();
		else if (user_input.compare("SEARCH") == 0)
		{
			book.display_contact();
			book.search_contact();
		}
		std::cout << std::endl << "What do you want to do ?" << std::endl;
		std::cin >> user_input;
	}
	return (0);
}
