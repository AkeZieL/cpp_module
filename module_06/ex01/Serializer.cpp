/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:13:29 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/20 19:56:27 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
	std::cout << "default constructor called" << std::endl;
};
Serializer::Serializer(Serializer const &copy) {
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
};
Serializer::~Serializer(void) {
	std::cout << "destructor called" << std::endl;
};

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}; 

Data *Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
};

Serializer &Serializer::operator=(Serializer const &copy) {
	if (this != &copy)
		return *this;
	return *this;
};

std::ostream &operator<<(std::ostream &outfile, Data data) {
	outfile << data._name << std::endl;
	outfile << data._hp << std::endl;
	outfile << data.inv[0] << std::endl;
	outfile << data.inv[1] << std::endl;
	return (outfile);
};
