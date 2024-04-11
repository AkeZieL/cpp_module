/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:48:12 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 06:59:40 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain()) {
	std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(Dog const &copy) : Animal(copy){
	*this = copy;
};

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
};

Dog &Dog::operator=(Dog const &copy) {
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	return *this;
};

void Dog::makeSound(void) const {
	std::cout << "Dog sound" << std::endl;
};

bool Dog::ft_compare(Dog const &to_compare) {
	int i;
	if (this->_type != to_compare._type)
		return (false);
	for(i = 0; i < 100; i++) {
		if (this->_brain->getIdea(i) != to_compare._brain->getIdea(i))
			return (false);
	}
	return (true);
};
