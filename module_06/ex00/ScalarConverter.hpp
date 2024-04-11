/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:28:53 by mbilly            #+#    #+#             */
/*   Updated: 2024/04/06 09:40:23 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter(void);
		ScalarConverter &operator=(ScalarConverter const &copy);

		//function
		static void convertFromChar(void);
		static void convertFromInt(void);
		static void convertFromDouble(void);
		static void convertFromFloat(void);
		static void convertFromLiteral(std::string input);
		static void printAll(void);

	public:
		static void convert(std::string &input);
};

std::ostream &operator<<(std::ostream &outfile, ScalarConverter const &copy);
