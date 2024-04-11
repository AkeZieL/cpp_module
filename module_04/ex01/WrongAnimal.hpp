/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:28:58 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/30 17:32:28 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &copy);
		~WrongAnimal(void);

		WrongAnimal &operator=(WrongAnimal const &copy);

		void makeSound(void) const;
};

#endif
