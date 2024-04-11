/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:36:09 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/08 11:04:52 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;

		int setGrade(int grade);
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &copy);

		std::string getName(void) const;
		int getGrade(void) const;

		void increment(void);
		void decrement(void);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &outfile, Bureaucrat const &bureaucrat);
