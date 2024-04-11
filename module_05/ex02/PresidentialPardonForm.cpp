/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:27 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:23:50 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm" ,25, 5) {
	std::cout << "default constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy) {
	*this = copy;
};

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "destructor called" << std::endl;
};

void PresidentialPardonForm::pardoned(std::string target) const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > AForm::getGradeExecute())
		throw ExecuteGradeTooLow();
	this->pardoned(executor.getName());
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
	AForm::operator=(copy);
	return *this;
};
