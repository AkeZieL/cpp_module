/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:43:02 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/18 12:23:33 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created" << std::endl;
};

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
};

void	Zombie::announce(void){
	std::cout << this->_name << " Brainz" << std::endl;
};
