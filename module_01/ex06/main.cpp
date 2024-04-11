/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:52:44 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/26 19:06:33 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	obj;

	if (argc != 2)
	{
		std::cerr << "Usage:" << std::endl;
		return (0);
	}
	obj.complain(argv[1]);
}
