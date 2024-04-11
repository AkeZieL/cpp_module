/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:22:49 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/17 11:42:00 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <unistd.h>

class Span {
	private:
		std::vector<int> _vect;
		unsigned int _size;
	public:
		Span(void);
		Span(Span const &copy);
		Span(unsigned int size);
		~Span(void);

		Span &operator=(Span const &copy);

		void addNumber(int nbr);
		void fillRandomly(unsigned int size);
		int shortestSpan(void) const;
		int longestSpan(void) const;
		void printVector(void) const;

		class NotEnoughtNbr : public std::exception {
			char const *what() const throw()
			{
				return ("Not enought number !");
			}
		};

		class VectIsFull : public std::exception {
			char const *what() const throw()
			{
				return ("Vector is full !");
			}
		};
};
