/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:43:06 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/18 12:21:03 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int	main(void){
	Zombie *LeZombie = newZombie("JPF");
	LeZombie->announce();
	randomChump("JPP");
	delete LeZombie;
};
