/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:43:57 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 07:04:16 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
	private:
		std::string _type;
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);

		Dog &operator=(Dog const &copy);

		void makeSound(void) const;
};

#endif
