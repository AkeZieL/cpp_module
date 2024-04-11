/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:36:09 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/09 18:39:51 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;

		void setGrade(int grade);
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &copy);

		std::string getName(void) const;
		int getGrade(void) const;

		void increment(void);
		void decrement(void);
		void signForm(const Form &form) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too high (Bureaucrat class)");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low (Bureaucrat class)");
				}
		};
};

std::ostream &operator<<(std::ostream &outfile, Bureaucrat const &bureaucrat);
