/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:52:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 07:04:01 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(Cat const &copy) : Animal(copy) {
	*this = copy;
};

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
};

Cat &Cat::operator=(Cat const &copy) {
	this->_type = copy._type;
	return *this;
};

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
};
