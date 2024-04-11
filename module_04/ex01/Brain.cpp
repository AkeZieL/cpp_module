/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:35:00 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 06:00:14 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called: ideas filled" << std::endl;
	int	i;
	for (i = 0; i < 100; i++)
		_ideas[i] = "I have an idea";
};

Brain::Brain(Brain const &copy) {
	*this = copy;
};

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
};

Brain &Brain::operator=(Brain const &copy) {
	int	i;
	for (i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
};

std::string Brain::getIdea(int i) const {
	return (this->_ideas[i]);
};
