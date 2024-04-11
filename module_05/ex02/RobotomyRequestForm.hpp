/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:58:25 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 08:42:40 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm {
	public:
		RobotomyRequestForm(void);
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
