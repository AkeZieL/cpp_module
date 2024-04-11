/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:40 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/28 14:07:28 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bit;
};

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->bit));
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
	return this->value;
};

int Fixed::toInt(void) const{
	return (this->value >> this->bit);
};

float Fixed::toFloat(void) const {
	return ((float)this->value / (float)(1 << this->bit));
};

std::ostream &operator<<(std::ostream &outfile, Fixed const & fixed){
	outfile << fixed.toFloat();
	return (outfile);
};
