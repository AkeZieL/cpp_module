/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:20:23 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/25 14:41:17 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Serializer test;
	uintptr_t save;
	Data data_deserialize;

	Data data;
	data._name = "jsp";
	data._hp = 12;
	data.inv[0] = "arrow";
	data.inv[1] = "none";

	save = test.serialize(&data);
	//std::cout << save << std::endl;
	data_deserialize = *test.deserialize(save);
	std::cout << std::endl << "Base data struct: " << std::endl << data << std::endl;
	std::cout << "Data deserialize struct: " << std::endl << data_deserialize << std::endl;
	
};
