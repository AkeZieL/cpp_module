/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:59:42 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:23:02 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {
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
		"         #" << std::endl <<
		"        >#<" << std::endl <<
		"         #" << std::endl <<
		"        ###" << std::endl <<
		"      .#\\###." << std::endl <<
		"    .#####\\###." << std::endl <<
		"       #####" << std::endl <<
		"      #\\#####" << std::endl <<
		"    .####\\####" << std::endl <<
		"  .########\\####." << std::endl <<
		"      #######" << std::endl <<
		"     #\\#######" << std::endl <<
		"  .#####\\#######." << std::endl <<
		".#########\\#######." << std::endl <<
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
	this->asciiTree(executor.getName());
};
