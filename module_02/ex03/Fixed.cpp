/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:40 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/28 15:23:01 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {
};

Fixed::Fixed(const int value){
	this->value = value << this->bit;
};

Fixed::Fixed(const float value){
	this->value = roundf(value * (1 << this->bit));
};


Fixed::Fixed(const Fixed& copy){
	*this = copy;
}

Fixed::~Fixed(void){
};


//

Fixed &Fixed::operator=(const Fixed &copy){
	if (this != &copy)
		this->value = copy.getRawBits();
	return *this;
};

bool Fixed::operator<(const Fixed &copy){
	return (this->value < copy.getRawBits());
};
bool Fixed::operator<=(const Fixed &copy){
	return (this->value <= copy.getRawBits());
};
bool Fixed::operator>(const Fixed &copy){
	return (this->value > copy.getRawBits());
};
bool Fixed::operator>=(const Fixed &copy){
	return (this->value >= copy.getRawBits());
};
bool Fixed::operator==(const Fixed &copy){
	return (this->value == copy.getRawBits());
};
bool Fixed::operator!=(const Fixed &copy){
	return (this->value != copy.getRawBits());
};

//

float Fixed::operator+(const Fixed &copy) const{
	return (this->toFloat() + copy.toFloat());
};
float Fixed::operator-(const Fixed &copy) const {
	return (this->toFloat() - copy.toFloat());
};
float Fixed::operator*(const Fixed &copy) const {
	return (this->toFloat() * copy.toFloat());
};
float Fixed::operator/(const Fixed &copy) const{
	return (this->toFloat() / copy.toFloat());
};

//

Fixed Fixed::operator++(void){
	this->value++;
	return *this;
};
Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++this->value;
	return tmp;
};
Fixed Fixed::operator--(void){
	this->value--;
	return *this;
};
Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--this->value;
	return tmp;
};

//

int Fixed::getRawBits(void) const{
	return this->value;
};

int Fixed::toInt(void) const{
	return (this->value >> this->bit);
};

float Fixed::toFloat(void) const {
	return ((float)this->value / (float)(1 << this->bit));
};

//

Fixed &Fixed::min(Fixed &first, Fixed &second){
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
};

const Fixed &Fixed::min(Fixed const &first, Fixed const &second){
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
};

Fixed &Fixed::max(Fixed &first, Fixed &second){
	if (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
};

const Fixed &Fixed::max(Fixed const &first, Fixed const &second){
	if (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
};

std::ostream &operator<<(std::ostream &outfile, Fixed const & fixed){
	outfile << fixed.toFloat();
	return (outfile);
};
