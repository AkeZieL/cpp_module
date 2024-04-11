/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:29:59 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/14 15:50:45 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {
	std::cout << "default constructor called" << std::endl;
};

Span::Span(unsigned int size) : _size(size) {
	std::cout << "size constructor called" << std::endl;
};

Span::Span(Span const &copy) {
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
};

Span::~Span(void) {
	std::cout << "destructor called" << std::endl;
};

Span &Span::operator=(Span const &copy) {
	this->_vect = copy._vect;
	return(*this);
};

void Span::addNumber(int nbr) {
	if (this->_vect.size() == this->_size)
		throw VectIsFull();
	this->_vect.push_back(nbr);
};

void Span::fillRandomly(unsigned int size) {
	srand(static_cast<unsigned int>(std::time(NULL)));

	while (this->_vect.size() < size) {
		if (this->_vect.size() == this->_size)
			throw VectIsFull();
		int randomNbr = std::rand() % 80000;
		this->_vect.push_back(randomNbr);
		usleep(50);
	}

};

int Span::shortestSpan(void) const {
	if (this->_vect.size() == 0 || this->_vect.size() == 1)
		throw NotEnoughtNbr();
	std::vector<int> copy = this->_vect;
	std::sort(copy.begin(), copy.end());
	int shortestSpan = copy[1] - copy[0];
	for (size_t i = 2; i < this->_size; i++) {
		if (copy[i] - copy[i - 1] < shortestSpan)
			shortestSpan = copy[i] - copy[i - 1];
	}
	return shortestSpan;
};

int Span::longestSpan(void) const {
	if (this->_vect.size() == 0 || this->_vect.size() == 1)
		throw NotEnoughtNbr();
	std::vector<int> copy = this->_vect;
	std::sort(copy.begin(), copy.end());
	return (copy.back() - copy.front());
};

void Span::printVector(void) const {
	for (std::vector<int>::const_iterator it = this->_vect.begin(); it != this->_vect.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
};
