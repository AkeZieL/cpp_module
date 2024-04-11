/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:35:57 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/09 18:22:39 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructor

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
	std::cout << "default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name) : _name(name), _grade(150) {
	std::cout << "string constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(int grade) : _name("default") {
	std::cout << "grade constructor called" << std::endl;
	this->setGrade(grade);
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "string and grade constructor called" << std::endl;
	this->setGrade(grade);
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
};

// destructor

Bureaucrat::~Bureaucrat(void) {
	std::cout << "destructor called" << std::endl;
};

// setter

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	return ;
};

// getter

std::string Bureaucrat::getName(void) const {
	return (this->_name);
};

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
};


// function

void Bureaucrat::increment(void) {
	std::cout << "increment func called" << std::endl;
	this->setGrade(this->getGrade() + 1);
};

void Bureaucrat::decrement(void) {
	std::cout << "decrement func called" << std::endl;
	this->setGrade(this->getGrade() - 1);
};

void Bureaucrat::signForm(const Form &form) const {
	if (form.getSigned() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << form.getName() << " because ";
};

// operator

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy) {
	this->_grade = copy._grade;
	return *this;
};

std::ostream &operator<<(std::ostream &outfile, Bureaucrat const &bureaucrat) {
	outfile << bureaucrat.getName();
	outfile << ", bureaucrat grade";
	outfile << bureaucrat.getGrade();
	return (outfile);
};
