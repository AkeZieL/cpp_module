/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:53:05 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/17 16:49:10 by mbilly           ###   ########.fr       */
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
	int i = 0;
	
	for (i = 0; i < 4; ++i)
                if (not(lvls[i].compare(level)))
                        break ;
 switch (i) {
                case 0:
                        debug();
                case 1:
                        info();
                case 2:
                        warning();
                case 3:
                        this->error();
                        break ;
                default:
                        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	

	}
};
