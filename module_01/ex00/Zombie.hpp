/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:42:51 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/18 12:15:22 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
};
