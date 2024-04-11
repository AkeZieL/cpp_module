/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:39:53 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/05 18:14:56 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

template <typename I>

void iter(I *array, size_t length, void (*func)(I &)) {
	if (array == NULL || func == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
};
