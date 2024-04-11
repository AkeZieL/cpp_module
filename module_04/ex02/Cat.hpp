/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:51:29 by mbilly            #+#    #+#             */
/*   Updated: 2023/10/08 21:31:30 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		std::string _type;
		Brain* _brain;
	public:
		Cat(void);
		Cat(Cat const &copy);
		~Cat(void);

		Cat &operator=(Cat const &copy);

		void makeSound(void) const;
		bool ft_compare(Cat const &to_compare);
};

#endif
