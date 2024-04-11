/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:14 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 08:38:54 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm {
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm(void);

		void pardoned(std::string target) const;
		void execute(Bureaucrat const &executor) const;

		PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Form not signed");
				}
		};
};
