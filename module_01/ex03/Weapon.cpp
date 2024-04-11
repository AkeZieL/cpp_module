/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:04:36 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/24 16:13:39 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
};
Weapon::~Weapon(void) {
};

std::string Weapon::getType(void) const{
	return (this->type);
};
void	Weapon::setType(std::string type){
	this->type = type;
};
