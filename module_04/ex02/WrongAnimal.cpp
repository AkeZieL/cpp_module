/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:30:52 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/30 17:13:22 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknown"){
	std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	*this = copy;
};

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy) {
	this->_type = copy._type;
	return *this;
};

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
};
