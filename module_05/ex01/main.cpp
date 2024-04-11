/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:35:43 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/09 18:31:33 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	basicTest(void) {
	try
	{
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
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

void	formBasicTest(void) {
	std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mForm basic test\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat bur1("bur1", 50);
	Form form1("form1", 50, 50);
	try {
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form1 << std::endl;
		std::cout << std::endl << "\033[33mbeSigned\033[0m" << std::endl << std::endl;
		form1.beSigned(bur1);
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form1 << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;

};

void formLowGradeSign(void) {
	try {
		std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
		std::cout << std::endl << "\033[31mForm low grade sign test\033[0m" << std::endl << std::endl;
		std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
		Bureaucrat bur2("bur2", 50);
		Form form2("form2", 51, 50);
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form2 << std::endl;
		std::cout << std::endl << "\033[33mbeSigned\033[0m" << std::endl << std::endl;
		form2.beSigned(bur2);
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form2 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
};

void formSignForm(void) {
	std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << std::endl << "\033[31mForm high grade sign\033[0m" << std::endl << std::endl;
	std::cout << "\033[33mConstructor\033[0m" << std::endl << std::endl;
	Bureaucrat bur3("bur3", 50);
	Form form3("form3", 49, 50);
	try {
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form3 << std::endl;
		std::cout << std::endl << "\033[33mbeSigned\033[0m" << std::endl << std::endl;
		form3.beSigned(bur3);
		std::cout << std::endl << "\033[33mInformation about Form\033[0m" << std::endl << std::endl;
		std::cout << form3 << std::endl;
		std::cout << std::endl << "\033[33mDestructor\033[0m" << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
};

int	main(void)
{
	std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << "\033[41m\033[33mTEST BUREAUCRAT\033[0m" << std::endl;
	basicTest();
	augmentationDuGrade();
	baisseDuGrade();
	bureaucratInvalide();
	bureaucratInvalide2();
	std::cout << std::endl << "\033[33m-----------------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << "\033[41m\033[33mTEST FORM\033[0m" << std::endl;
	formBasicTest();
	formLowGradeSign();
	formSignForm();
}
