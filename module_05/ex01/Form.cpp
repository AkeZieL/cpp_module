/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:36:52 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/09 18:10:28 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructor

Form::Form(void) :
	_name("default"), _signed(false), _gradeSign(150), _gradeExecute(150) {
	std::cout << "default constructor called" << std::endl;
};

Form::Form(std::string name) :
	_name(name), _signed(false), _gradeSign(150), _gradeExecute(150) {
	std::cout << "name constructor called" << std::endl;
};

Form::Form(const int grade) :
	_name("default"), _signed(false), _gradeSign(this->setGrade(grade)), _gradeExecute(this->setGrade(grade)) {
	std::cout << "grade constructor called" << std::endl;
};

Form::Form(std::string name, const int grade) :
	_name(name), _signed(false), _gradeSign(this->setGrade(grade)), _gradeExecute(this->setGrade(grade)) {
	std::cout << "name and grade constructor called" << std::endl;
};

Form::Form(std::string name, const int gradeSign, const int gradeExecute) :
	_name(name), _signed(false), _gradeSign(this->setGrade(gradeSign)), _gradeExecute(this->setGrade(gradeExecute)) {
	std::cout << "name and gradeSign and gradeExecute constructor called" << std::endl;
};

Form::Form(const int gradeSign, const int gradeExecute) :
	_name("default"), _signed(false), _gradeSign(this->setGrade(gradeSign)), _gradeExecute(this->setGrade(gradeExecute)) {
	std::cout << "gradeSign and gradeExecute constructor called" << std::endl;
};

Form::Form(Form const &copy) :
	_gradeSign(this->setGrade(copy.getGradeSign())), _gradeExecute(this->setGrade(copy.getGradeExecute())){
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
};

//Destructor

Form::~Form(void) {
	std::cout << "destructor called" << std::endl;
};

//Getter

int Form::getGradeSign(void) const {
	return (this->_gradeSign);
};

int Form::getGradeExecute(void) const {
	return (this->_gradeExecute);
};

bool Form::getSigned(void) const {
	return (this->_signed);
};

std::string Form::getName(void) const {
	return (this->_name);
};

//Setter

int Form::setGrade(const int grade) {
        if (grade < 1)
                throw GradeTooHighException();
        if (grade > 150)
                throw GradeTooLowException();
	return (grade);
};

//Function

void Form::beSigned(Bureaucrat const &bureaucrat) {
        std::cout << "beSigned function called" << std::endl;
	if (bureaucrat.getGrade() <= this->getGradeSign())
	{
		this->_signed = true;
		bureaucrat.signForm(*this);
	}
	else
	{
		this->_signed = false;
		bureaucrat.signForm(*this);
		throw GradeTooLowException();
	}
};

//Operator

Form &Form::operator=(const Form &copy) {
	this->_signed = copy.getSigned();
	return *this;
};

std::ostream &operator<<(std::ostream &outfile, Form const &form) {
	outfile << "Name : " << form.getName();
	outfile << ", Grade sign : " << form.getGradeSign();
	outfile << ", Grade execute : " << form.getGradeExecute();
	outfile << ", Signed : " << form.getSigned();
	return outfile;
};
