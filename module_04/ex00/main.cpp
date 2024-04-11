/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:42:44 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/25 13:57:14 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[33mConstructor\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "\033[33mFirst test\033[0m" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "\033[33mSecond test\033[0m" << std::endl;
	const WrongAnimal* w_Animal = new WrongAnimal();
	const WrongAnimal* w_Cat = new WrongCat();

	std::cout << std::endl;
	w_Animal->makeSound();
	w_Cat->makeSound();
	std::cout << std::endl;

	std::cout << std::endl << "\033[33mDestructor test\033[0m" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete w_Animal;
	delete w_Cat;
	return 0;
}
