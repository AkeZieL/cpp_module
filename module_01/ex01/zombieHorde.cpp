/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:28:32 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/22 18:38:36 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	int i = 0;
	Zombie *z = new Zombie[N];

	while (i < N)
	{
		z[i].give_name(name);
		i++;
	}
	return (z);
};
