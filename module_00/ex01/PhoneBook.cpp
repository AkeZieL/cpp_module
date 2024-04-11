/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:04:33 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/08 07:12:57 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
};

PhoneBook::~PhoneBook(void) {
};

void PhoneBook::how_to_use(void) const {
	std::cout << "\033[1;31;4mHow to use ?\033[0m" << std::endl << std::endl;
	std::cout << "\033[32mSEARCH: Search contact\033[0m" << std::endl;
	std::cout << "\033[32mADD: Add contact\033[0m" << std::endl;
	std::cout << "\033[32mEXIT: Exit the Phonebook\033[0m" << std::endl;
};

void PhoneBook::add_contact(void) {
	static int i;

	this->contact[i % 8].create_contact();
	this->contact[i % 8].index = i % 8;
	i++;
};

void PhoneBook::display_contact(void) const {
	int	i;

	i = -1;
	while (++i < 8)
		this->contact[i].display(i);
};

int PhoneBook::get_input(void) const {
	int user_input = -1;
	bool valid = false;

	while (!valid)
	{
		std::cout << std::endl << std::endl << "Enter the contact index" << std::endl;
		std::cin >> user_input;
		if (std::cin.good() && (user_input >= 0 && user_input < 8))
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Wrong input !" << std::endl;
		}
	}
	return (user_input);
}

void PhoneBook::search_contact(void) const {
	int	i = get_input();

	this->contact[i].print(i);
};
