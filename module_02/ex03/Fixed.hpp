/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:40:55 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/29 13:50:03 by mbilly           ###   ########.fr       */
/*                                                                            */

/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int value;
		static const int bit = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed(void);

		Fixed &operator=(const Fixed &copy);
		bool operator<(const Fixed &copy);
		bool operator<=(const Fixed &copy);
		bool operator>(const Fixed &copy);
		bool operator>=(const Fixed &copy);
		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);

		float operator+(const Fixed &copy) const;
		float operator-(const Fixed &copy) const;
		float operator*(const Fixed &copy) const;
		float operator/(const Fixed &copy) const;

		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		void setRawBits(int const raw);
		int getRawBits(void) const;
		int toInt(void) const;
		float toFloat(void) const;

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream & operator<<(std::ostream & outfile, Fixed const & fixed);

#endif
