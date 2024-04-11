/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:36:51 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 08:12:21 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm {
	public:
		//constructor
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm(void);

		//function
		void execute(Bureaucrat const &executor) const;
		void asciiTree(Bureaucrat const &executor) const;

		//getter
		int getGradeSign(void) const;
		int getGradeExecute(void) const;

		//setter

		//operator
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);

		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form not signed");
				}
		};
};
