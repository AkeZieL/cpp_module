/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:27:50 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/22 18:43:03 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	int size = 10;
	int i = -1;

	Zombie *z = zombieHorde(size, "Frank");
	std::cout << std::endl;
	while (++i < size)
		z[i].announce();
	std::cout << std::endl;
	Zombie *z2 = zombieHorde(size - 8, "Einstein");
	std::cout << std::endl;
	i = -1;
	while (++i < size - 8)
		z2[i].announce();
	std::cout << std::endl;
	delete [] z;
	std::cout << std::endl;
	delete [] z2;
}
