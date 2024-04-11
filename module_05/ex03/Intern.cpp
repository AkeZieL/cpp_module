/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:14:43 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 10:55:20 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "default intern constructor called" << std::endl;
};

Intern::Intern(Intern const &copy) {
	*this = copy;
};

Intern::~Intern(void) {
	std::cout << "destructor called" << std::endl;
};

Intern &Intern::operator=(Intern const &copy) {
	if (this == &copy)
		return *this;
	return *this;
};

AForm *Intern::createPresident(const std::string target) {
	return (new PresidentialPardonForm(target));
};

AForm *Intern::createRobotomy(const std::string target) {
	return (new RobotomyRequestForm(target));
};

AForm *Intern::createShrubbery(const std::string target) {
	return (new ShrubberyCreationForm(target));
};

AForm	*Intern::makeForm(std::string name, std::string target) {
	AForm *(Intern::*ptr_func_memb[3])(const std::string target) = {&Intern::createPresident, &Intern::createRobotomy, &Intern::createShrubbery};
	std::string form_str[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++) {
		if (name == form_str[i]) {
			std::cout << "Intern create " << name << std::endl;
			return ((this->*ptr_func_memb[i])(target));
		}
	}
	std::cout << "Intern cannot create form called " << name << std::endl; 
	std::cout << "PresidentialPardonForm, RobotomyRequestForm, ShrubberyCreationForm are available" << std::endl;
	return (NULL);
};
