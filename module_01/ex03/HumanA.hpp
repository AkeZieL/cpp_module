/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:09:20 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/24 16:13:12 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string name;
		Weapon& wp;
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA(void);

		void	attack(void) const;
};

#endif
