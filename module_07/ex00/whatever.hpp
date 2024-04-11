/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:52:21 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/05 14:37:56 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename S>

void swap(S value1, S value2) {
	S tmp;

	tmp = value1;
	value1 = value2;
	value2 = tmp;
};

template <typename Mi>

const Mi &min(const Mi &value1, const Mi &value2) {
	return (value1 < value2 ? value1 : value2);
};

template <typename Ma>

const Ma &max (const Ma &value1, const Ma &value2) {
	return (value1 > value2 ? value1 : value2);
};
