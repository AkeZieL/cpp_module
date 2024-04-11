/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:43:57 by mbilly            #+#    #+#             */
/*   Updated: 2023/11/15 06:59:01 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		std::string _type;
		Brain* _brain;
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);

		Dog &operator=(Dog const &copy);

		void makeSound(void) const;
		bool ft_compare(Dog const &to_compare);
};

#endif
