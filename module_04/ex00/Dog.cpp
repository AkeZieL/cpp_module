/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:48:12 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 07:04:31 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(Dog const &copy) : Animal(copy) {
	*this = copy;
};

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
};

Dog &Dog::operator=(Dog const &copy) {
	this->_type = copy._type;
	return *this;
};

void Dog::makeSound(void) const {
	std::cout << "Dog sound" << std::endl;
};
