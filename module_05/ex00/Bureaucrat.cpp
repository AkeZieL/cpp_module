/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:35:57 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/08 11:07:38 by mbilly           ###   ########.fr       */
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

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
        *this = copy;
};

// destructor

Bureaucrat::~Bureaucrat(void) {
	std::cout << "destructor called" << std::endl;
};

// setter

int Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	return (this->_grade = grade);
};

// getter

std::string Bureaucrat::getName(void) const {
	return (this->_name);
};

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
};


// increment et decrement

void Bureaucrat::increment(void) {
	std::cout << "increment func called" << std::endl;
	this->setGrade(this->getGrade() + 1);
};

void Bureaucrat::decrement(void) {
	std::cout << "decrement func called" << std::endl;
	this->setGrade(this->getGrade() - 1);
};

// operator

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy) {
        this->_grade = copy.getGrade();
        return *this;
};

std::ostream &operator<<(std::ostream &outfile, Bureaucrat const &bureaucrat) {
	outfile << bureaucrat.getName();
	outfile << ", bureaucrat grade";
	outfile << bureaucrat.getGrade();
	return (outfile);
};
