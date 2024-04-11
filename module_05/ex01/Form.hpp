/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:36:16 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/09 18:39:23 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExecute;
	public:
		//construtor qnd destructor
		Form(void);
		Form(std::string name);
		Form(const int grade);
		Form(std::string name, const int grade);
		Form(std::string name, const int gradeSign, const int gradeExecute);
		Form(const int gradeSign, const int gradeExecute);
		Form(Form const &copy);
		~Form(void);

		//operator
		Form &operator=(const Form &copy);

		//function
		void beSigned(Bureaucrat const &bureaucrat);	

		//getter
		int getGradeSign(void) const;
		int getGradeExecute(void) const;
		bool getSigned(void) const;
		std::string getName(void) const;

		//setter
		int setGrade(const int grade);

		//class
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return("Grade is too high (Form class)");
				}
		};
	
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return("Grade is too low (Form class)");
				}
		};
};

std::ostream &operator<<(std::ostream &outfile, Form const &form);
