/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:40 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/27 23:48:01 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
};
Fixed &Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->value = copy.getRawBits();
	return *this;
};

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
};

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
};
