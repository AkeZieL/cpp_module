/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:04:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/24 16:12:54 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : wp(wp) {
	this->name = name;
};

HumanA::~HumanA(void){
};

void	HumanA::attack(void) const{
	std::cout << this->name << " attacks with their " << this->wp.getType() << std::endl;
};
