/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:42 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:25:28 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
	std::cout << "default constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "default constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy) {
	*this = copy;
};

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "destructor called" << std::endl;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy) {
	AForm::operator=(copy);
	return *this;
};

void ShrubberyCreationForm::asciiTree(Bureaucrat const &executor) const {
	std::ofstream outfile((executor.getName() + "_shrubbery").c_str());
	if (!outfile) {
		std::cerr << "Failed to open file" << std::endl;
		return ;
	}
	for (int i = 0; i < 5; i++)
	{
		outfile <<
		"         v" << std::endl <<
		"        >X<" << std::endl <<
		"         A" << std::endl <<
		"        d$b" << std::endl <<
		"      .d\\$$b." << std::endl <<
		"    .d$i$$\\$$b." << std::endl <<
		"       d$$@b" << std::endl <<
		"      d\\$$$ib" << std::endl <<
		"    .d$$$\\$$$b" << std::endl <<
		"  .d$$@$$$$\\$$ib." << std::endl <<
		"      d$$i$$b" << std::endl <<
		"     d\\$$$$@$b" << std::endl <<
		"  .d$@$$\\$$$$$@b." << std::endl <<
		".d$$$$i$$$\\$$$$$$b." << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
	std::endl;
	}
	outfile.close();

};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->getSigned() == false)
		throw FormNotSignedException();
	if (executor.getGrade() > AForm::getGradeExecute())
		throw ExecuteGradeTooLow();
	if (this->_target == "default")
		this->asciiTree(executor.getName());
	else
		this->asciiTree(this->_target);
};
