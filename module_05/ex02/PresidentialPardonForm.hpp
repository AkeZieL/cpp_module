/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:14 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 09:38:41 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm {
	public:
		PresidentialPardonForm(void);
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
