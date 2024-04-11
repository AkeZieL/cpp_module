/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:28:01 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/22 18:40:29 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Zombie " << name << " created" << std::endl;
};

Zombie::Zombie(void){
	this->_name = "Nameless";
	std::cout << "Zombie horde created : Zombie name is \"" << this->_name << "\"" << std::endl;
};

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
};

void	Zombie::announce(void) const{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

void	Zombie::give_name(std::string name){
	this->_name = name;
};
