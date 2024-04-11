/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:35:43 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/08 10:50:45 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	basicTest(void) {
	try
	{
		std::cout << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mBasic test\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat test;
		Bureaucrat test1("slt");
		Bureaucrat test2(10);
		Bureaucrat test3("slt1", 10);

		std::cout << std::endl << "\033[33mDecrement\033[0m" << std::endl << std::endl;
		test.decrement();
		test1.decrement();
		test2.decrement();
		test3.decrement();

		std::cout << std::endl << "\033[33mIncrement\033[0m" << std::endl << std::endl;
		test.increment();
		test1.increment();
		test2.increment();
		test3.increment();

		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << test << std::endl << test1 << std::endl << test2 << std::endl << test3 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception :" << e.what() << std::endl;
	}
}

void	augmentationDuGrade(void) {
	try
	{
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mAugmentation du grade (1 -> 0)\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat cobaye("cobaye", 1);
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye << std::endl;
		std::cout << std::endl << "\033[33mDecrement\033[0m" << std::endl << std::endl;
		cobaye.decrement();
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception :" << e.what() << std::endl;
		return ;
	}

}

void	baisseDuGrade(void) {
	try
	{
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mBaisse du grade (150 -> 151)\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat cobaye1("cobaye1", 150);
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye1 << std::endl;
		std::cout << std::endl << "\033[33mIncrement\033[0m" << std::endl << std::endl;
		cobaye1.increment();
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye1 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception :" << e.what() << std::endl;
	}

}

void	bureaucratInvalide(void) {
	try
	{
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mCreation Bureaucrat avec grade invalide (0)\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat cobaye2("cobaye2", 0);
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye2 << std::endl;
		std::cout << std::endl << "\033[33mDecrement\033[0m" << std::endl << std::endl;
		cobaye2.decrement();
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye2 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception :" << e.what() << std::endl;
	}
}

void	bureaucratInvalide2(void) {
	try
	{
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mCreation Bureaucrat avec grade invalide (151)\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat cobaye3("cobaye3", 151);
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye3 << std::endl;
		std::cout << std::endl << "\033[33mDecrement\033[0m" << std::endl << std::endl;
		cobaye3.decrement();
		std::cout << std::endl << "\033[33mInformation about bucreaucrat\033[0m" << std::endl << std::endl;
		std::cout << cobaye3 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;

	}
	catch (const std::exception &e) {
		std::cerr << "Exception :" << e.what() << std::endl;
	}
}

int	main(void)
{
	basicTest();
	augmentationDuGrade();
	baisseDuGrade();
	bureaucratInvalide();
	bureaucratInvalide2();
	return 1;
}
