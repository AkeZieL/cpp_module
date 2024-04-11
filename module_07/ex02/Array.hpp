/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:45:40 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/17 12:10:11 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>
#include <cstdlib>

#define MAX_VAL 750

template <typename T>

class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int uNbr);
		Array(Array const &copy);
		~Array(void);

		Array &operator=(Array const &copy);
		T& operator[](unsigned int size);

		unsigned int size(void) const;


		class Operator : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Non unsigned int used in operator []");
				}
		};
};

#include "Array.tpp"

#endif
