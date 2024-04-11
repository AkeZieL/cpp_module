/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/27 23:22:20 by mbilly           ###   ########.fr       */
/*                                                                            */

/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int value;
		static const int bit = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
