/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:44:49 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 06:50:49 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &copy);
		virtual ~Animal(void);

		virtual Animal &operator=(Animal const &copy);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
