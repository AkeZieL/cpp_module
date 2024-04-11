/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:36:16 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 08:48:10 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExecute;
	public:
		//construtor and destructor
		AForm(void);
		AForm(std::string name);
		AForm(const int grade);
		AForm(std::string name, const int grade);
		AForm(std::string name, const int gradeSign, const int gradeExecute);
		AForm(const int gradeSign, const int gradeExecute);
		AForm(AForm const &copy);
		virtual ~AForm(void);

		//operator
		AForm &operator=(const AForm &copy);

		//function
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

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
					return("Grade is too high");
				}
		};
	
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return("Grade is too low");
				}
		};

		class ExecuteGradeTooLow : public std::exception {
                        public:
                                virtual const char* what() const throw() {
                                        return ("Execute grade too low");
                                }
                };

                class SignGradeTooLow : public std::exception {
                        public:
                                virtual const char* what() const throw() {
                                        return ("Sign grade too low");
                                }
                };

                class FormNotSignedException : public std::exception {
                        public:
                                virtual const char* what() const throw() {
                                        return ("Form not signed");
                                }
                };
};

std::ostream &operator<<(std::ostream &outfile, AForm const &form);
