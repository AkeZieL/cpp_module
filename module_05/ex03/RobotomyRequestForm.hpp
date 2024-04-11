/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:58:25 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 08:39:51 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm {
	private:
		std::string _target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm(void);

		void robotomized(std::string target) const;
		void execute(Bureaucrat const &executor) const;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

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
