/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:18:53 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 07:05:17 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
	std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) {
	*this = copy;
};

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
};

WrongCat &WrongCat::operator=(WrongCat const &copy) {
	this->_type = copy._type;
	return *this;
};

void WrongCat::makeSound(void) const {
	std::cout << "Wrong cat sound" << std::endl;
};
