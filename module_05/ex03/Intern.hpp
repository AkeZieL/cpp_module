/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:09:34 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 10:54:46 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	private:
		AForm *createPresident(const std::string target);
		AForm *createShrubbery(const std::string target);
		AForm *createRobotomy(const std::string target);
	public:
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);

		Intern &operator=(Intern const &copy);
		
		AForm *makeForm(std::string _name, std::string target);
};
