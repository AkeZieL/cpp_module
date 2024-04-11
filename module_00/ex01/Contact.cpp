/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:04:04 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/08 07:12:21 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
};

Contact::~Contact(void){
};

std::string Contact::get_user_input(std::string str) const{
	std::string user_input = "";
	bool valid = false;

	while (valid == false)
	{
		std::cout << str << std::endl;
		std::getline(std::cin, user_input);
		if (std::cin.good() && !user_input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Wrong input !" << std::endl;
		}
	}
	return (user_input);
};

void	Contact::create_contact(void) {
	std::cin.ignore();
	this->first_name = this->get_user_input("What is her/his first name ?");
	this->last_name = this->get_user_input("What is her/his last name ?"); 
	this->nickname = this->get_user_input("What is her/his nickname ?"); 
	this->phone_number = this->get_user_input("What is her/his phone_number ?");
	this->darkest_secret = this->get_user_input("What is her/his darkest secret ?");
};

void	Contact::display(int i) const {
	if (this->first_name.empty())
		return ;
	std::cout << std::endl << "|" << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << this->first_name;
	std::cout << "|" << std::setw(10) << this->last_name;
	std::cout << "|" << std::setw(10) << this->nickname;
	std::cout << "|";
}

void	Contact::print(int i) const{
	if (this->first_name.empty())
		return ;
	std::cout << std::endl << "Contact number : " << i << std::endl;
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name  << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}
