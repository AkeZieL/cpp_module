/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:05:02 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/24 16:17:33 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
};

HumanB::~HumanB(void){
};

void	HumanB::attack(void) const {
	std::cout << this->name << " attacks with their " <<  this->wp->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon &wp){
	this->wp = &wp;
};
