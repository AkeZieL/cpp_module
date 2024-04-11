/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:52:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 07:02:47 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(Cat const &copy) : Animal(copy) {
	*this = copy;
};

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
};

Cat &Cat::operator=(Cat const &copy) {
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	return *this;
};

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
};

bool Cat::ft_compare(Cat const &to_compare) {
	int i;
	if (this->_type != to_compare._type)
		return (false);
	for (i = 0; i < 100; i++)
        //      std::cout << this->_brain->getIdea(i) << "\t\t\t" << to_compare._brain->getIdea(i) << std::endl;
		if (this->_brain->getIdea(i) != to_compare._brain->getIdea(i))
			return (false);
	return (true);
};

