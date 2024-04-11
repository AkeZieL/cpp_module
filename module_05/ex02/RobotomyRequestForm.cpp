/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:33 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:23:25 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//constructor
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "default constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy) {
	*this = copy;
};

//function
void RobotomyRequestForm::robotomized(std::string target) const {
	srand(time(NULL));
	int val = std::rand();

	std::cout << target << " has 50\% chance to be robotomized : ";
	if (val % 2 == 0)
		std::cout << "has been robotomized" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
};

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > AForm::getGradeExecute())
		throw ExecuteGradeTooLow();
	this->robotomized(executor.getName());
};

//destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "destructor called" << std::endl;
};

//operator
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy) {
	AForm::operator=(copy);
	return *this;
};
