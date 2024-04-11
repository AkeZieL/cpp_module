/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:52:01 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/16 11:04:02 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void basicsRobotomy(void) {
	std::cout << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mRobotomyRequestForm basics test\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat *bur1 = new Bureaucrat("bur1", 1);
	Bureaucrat *bur2 = new Bureaucrat("bur2", 72);
	Bureaucrat *bur3 = new Bureaucrat("bur3", 150);
	AForm *robotomy = new RobotomyRequestForm();

	std::cout << std::endl << "\033[33mSign Failed test\033[0m" << std::endl << std::endl;
	try {
		robotomy->beSigned(*bur3);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mExecute Failed test\033[0m" << std::endl << std::endl;
		robotomy->beSigned(*bur2);
		bur2->executeForm(*robotomy);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mWorking test\033[0m" << std::endl << std::endl;
		robotomy->beSigned(*bur1);
		bur1->executeForm(*robotomy);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

};

void basicsShrubbery(void) {
	std::cout << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mShrubberyCreationForm basics test\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat *bur1 = new Bureaucrat("bur1", 1);
	Bureaucrat *bur2 = new Bureaucrat("bur2", 145);
	Bureaucrat *bur3 = new Bureaucrat("bur3", 150);
	AForm *shrubbery = new ShrubberyCreationForm();

	std::cout << std::endl << "\033[33mSign Failed test\033[0m" << std::endl << std::endl;
	try {
		shrubbery->beSigned(*bur3);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mExecute Failed test\033[0m" << std::endl << std::endl;
		shrubbery->beSigned(*bur2);
		bur2->executeForm(*shrubbery);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mWorking test\033[0m" << std::endl << std::endl;
		shrubbery->beSigned(*bur1);
		bur1->executeForm(*shrubbery);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}
	
};

void basicsPresidential(void) {
	std::cout << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mPresidentialPardonForm basics test\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat *bur1 = new Bureaucrat("bur1", 1);
	Bureaucrat *bur2 = new Bureaucrat("bur2", 25);
	Bureaucrat *bur3 = new Bureaucrat("bur3", 150);
	AForm *president = new PresidentialPardonForm();

	std::cout << std::endl << "\033[33mSign Failed test\033[0m" << std::endl << std::endl;
	try {
		president->beSigned(*bur3);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mExecute Failed test\033[0m" << std::endl << std::endl;
		president->beSigned(*bur2);
		bur2->executeForm(*president);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "\033[33mWorking test\033[0m" << std::endl << std::endl;
		president->beSigned(*bur1);
		bur1->executeForm(*president);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}
};

void basicsIntern(void) {
	std::cout << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mIntern basics test\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat *bur1 = new Bureaucrat("bur1", 1);
	Intern *int1 = new Intern();
	AForm *president;

	std::cout << std::endl << "\033[33mIntern create wrong form\033[0m" << std::endl << std::endl;
	president = int1->makeForm("bleubleubleu", "Bender");
	std::cout << "form address = " << president << std::endl;
	std::cout << std::endl << "\033[33mIntern create good form\033[0m" << std::endl << std::endl;
	president = int1->makeForm("PresidentialPardonForm", "Bender");
	std::cout << "form address = " << president << std::endl;
	std::cout << std::endl << "\033[33mExecute created form\033[0m" << std::endl << std::endl;
	try {
		president->beSigned(*bur1);
		bur1->executeForm(*president);
	}
	catch (std::exception const &e) {
		std::cout << "Exception : " << e.what() << std::endl;
	}


};

int main(void)
{
	basicsPresidential();
	basicsShrubbery();
	basicsRobotomy();
	basicsIntern();
}
