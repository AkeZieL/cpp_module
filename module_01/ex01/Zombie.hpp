/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:28:20 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/22 18:26:49 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void announce(void) const;
		void give_name(std::string name);
};

#endif
