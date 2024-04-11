/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:19:49 by mbilly            #+#    #+#             */
/*   Updated: 2023/10/04 18:29:03 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);

		Brain &operator=(Brain const &copy);

		std::string getIdea(int i) const;
};

#endif
