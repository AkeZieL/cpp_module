/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:27 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:26:26 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("default") {
	std::cout << "default constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
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
	if (this->_target == "default")
		this->pardoned(executor.getName());
	else
		this->pardoned(this->_target);
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
	AForm::operator=(copy);
	return *this;
};
