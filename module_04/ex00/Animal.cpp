/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:47:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/30 17:27:43 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Unknown"){
	std::cout << "Default Animal constructor called" << std::endl;
};

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Type Animal constructor called" << std::endl;
};

Animal::Animal(Animal const &copy) {
	*this = copy;
};

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
};

Animal &Animal::operator=(Animal const &copy) {
	this->_type = copy._type;
	return *this;
};

std::string Animal::getType(void) const {
	return this->_type;
};

void Animal::makeSound(void) const {
		std::cout << "Animal sound" << std::endl;
};
