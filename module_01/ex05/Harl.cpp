/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:53:05 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/26 17:33:26 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
};

Harl::~Harl(void){
};

void Harl::debug(void){
	std::cout << "function Debug called" << std::endl;
};

void Harl::info(void){
	std::cout << "function Info called" << std::endl;
};

void Harl::warning(void){
	std::cout << "function Warning called" << std::endl;
};

void Harl::error(void){
	std::cout << "function Error called" << std::endl;
};

void Harl::complain(std::string level){
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr_func_memb[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = -1;
	while (++i < 4)
		if (lvls[i] == level)
			(this->*ptr_func_memb[i])();
};
