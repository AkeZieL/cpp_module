/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:34:30 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/14 14:15:12 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class NoOccurrence : public std::exception {
	char const * what() const throw()
	{
		return "There is no occurrence of your number";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int nbr) {
	typename T::iterator it = container.begin();
	while (it != container.end()) {
		if (*it == nbr) {
			return it;
		}
		it++;
	}
	throw NoOccurrence();
};
