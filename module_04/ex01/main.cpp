/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:42:44 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/25 14:00:02 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void deep_copies(void)
{
	std::cout << std::endl << "\033[33:34;1mDeep copies\033[:0m" << std::endl << "Constructor:" << std::endl;
	Dog dog;
	Cat cat;
	Dog &dog_ref = dog;
	Cat &cat_ref = cat;
	Dog dog_copy(dog_ref);
	Cat cat_copy(cat_ref);
	Dog &dog_ref_copy = dog_copy;
	Cat &cat_ref_copy = cat_copy;

	std::cout << std::endl << "Comparaison entre Dog et Dog_Ref_Copy" << std::endl;
	if (dog.ft_compare(dog_ref_copy) == true)
		std::cout << "Dog et Dog_Ref_copy identique" << std::endl;
	else
		std::cout << "Dog et Dog_Ref_copy different" << std::endl;
	std::cout << std::endl << "Comparaison entre Cat et Cat_Ref_Copy" << std::endl;
	if (cat.ft_compare(cat_ref_copy) == true)
		std::cout << "Cat et Cat_Ref_copy identique" << std::endl;
	else
		std::cout << "Cat et Cat_Ref_copy different" << std::endl;
	std::cout << std::endl << "Destructor:" << std::endl;
}

int main()
{
	std::cout << "\033[33:34;1mTest main donne\033[:0m" << std::endl << "Constructor:" << std::endl;
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	std::cout << std::endl << "Destructor:" << std::endl;
	delete a;//should not create a leak
	delete b;

	deep_copies();

	std::cout << std::endl << "\033[33:34;1mDeuxieme test\033[:0m" << std::endl << "Constructor:" << std::endl;
	const Animal* tab[6];

	int	i;
	for(i = 0; i < 3; i++)
		tab[i] = new Dog();
	for(i = 3; i < 6; i++)
		tab[i] = new Cat();
	std::cout << std::endl;
	for(i = 0; i < 6; i++)
		tab[i]->makeSound();
	std::cout << std::endl << "Destructor:" << std::endl;
	for (i = 0; i < 6; i++)
		delete tab[i];
}
