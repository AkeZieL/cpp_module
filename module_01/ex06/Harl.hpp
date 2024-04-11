/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:52:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/17 14:39:26 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	private:
		void debug(void);
		void info (void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);
};

#endif
