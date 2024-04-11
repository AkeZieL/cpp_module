/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:55:31 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/20 19:54:52 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct Data {
	std::string _name;
	int _hp;
	std::string inv[2];
}Data;

class Serializer {
	public:
		Serializer(void);
		Serializer(Serializer const &copy);
		~Serializer(void);

		Serializer &operator=(Serializer const &copy);

		uintptr_t serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);
};

std::ostream &operator<<(std::ostream &outfile, Data data);
