/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:28:44 by mbilly            #+#    #+#             */
/*   Updated: 2024/04/06 09:40:55 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

namespace data {
	std::string _literal;
	bool _isChar = true;
	bool _hasF = false;
	bool _isNbr = true;
	bool _isLiterals = false;

	char _char;
	int _int;
	float _float;
	double _double;
};

//constructor, destructor, copy

ScalarConverter::ScalarConverter(void) {
	std::cout << "default constructor called" << std::endl;
};

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
};

ScalarConverter::~ScalarConverter(void) {
	std::cout << "destructor called" << std::endl;
};

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy) {
	(void)copy;
	return *this;
};

//function

void ScalarConverter::printAll() {
        if (data::_isChar == true)
                std::cout << data::_char << std::endl;
        else if (data::_isNbr == true && (data::_int < 32 || data::_int > 126))
                std::cout << "Non printable" << std::endl;
        else if (data::_isNbr == true && data::_int >= 32 && data::_int <= 126)
                std::cout << '\'' << static_cast<char>(data::_int) << '\'' << std::endl;
        else
               std::cout << "Impossible" << std::endl;
        //print int
        if (data::_isNbr == true)
                std::cout << data::_int << std::endl;
        else
                std::cout << "Impossible" << std::endl;
        //print double
        if (data::_isLiterals == true) {
                std::cout << data::_literal << std::endl;
                std::cout <<  data::_literal << std::endl;
        }
        else if (data::_double  == trunc(data::_double)) {
                std::cout << data::_double << ".0" << std::endl;
                std::cout << data::_float << ".0" << 'f' << std::endl;
        }
        else {
                std::cout << data::_double << std::endl;
                std::cout << data::_float << 'f' << std::endl;
        }
};

void ScalarConverter::convertFromChar() {
	data::_int= static_cast<int>(data::_char);
	data::_double = static_cast<double>(data::_char);
	data::_float= static_cast<float>(data::_char);
	ScalarConverter::printAll();
};

void ScalarConverter::convertFromFloat() {
	if (data::_isChar == true)
		data::_char = static_cast<char>(data::_float);
	data::_double = static_cast<double>(data::_float);
	data::_int = static_cast<int>(data::_float);
	ScalarConverter::printAll();
};

void ScalarConverter::convertFromDouble() {
	if (data::_isChar == true)
		data::_char = static_cast<char>(data::_double);
	data::_float = static_cast<float>(data::_double);
	data::_int = static_cast<int>(data::_double);
	ScalarConverter::printAll();
};

void ScalarConverter::convertFromInt() {
	if (data::_isChar == true)
		data::_char = static_cast<char>(data::_int);
	data::_double = static_cast<double>(data::_int);
	data::_float = static_cast<float>(data::_int);
	ScalarConverter::printAll();
};

void ScalarConverter::convertFromLiteral(std::string input) {
	std::cout << "Impossible" << std::endl;
	std::cout << "Impossible" << std::endl;

	if (data::_literal == "-inff" || data::_literal == "+inff" || data::_literal == "nanf") {
		std::string newInput = input.substr(0, input.size() - 1);
		std::cout << input << std::endl;
		std::cout << newInput << std::endl;
	}
	else {
		std::cout << input << "f" << std::endl;
		std::cout << input << std::endl;
	}
};

void ScalarConverter::convert(std::string &input) {
	std::string literals[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	bool hasDecimal = false;

	//check if input is char
	if (input.size() == 1 && !std::isdigit(input[0]) && std::isprint(input[0])) {
		data::_char = static_cast<char>(input[0]);
		return (convertFromChar());
	}
	else {
		data::_isChar = false;
	}
	//check if input is int/float/double
	for (size_t i = 0; i < input.size(); i++) {
		if (input[i] == '-' || input[i] == '+') {
			i++;
		}
		if (!std::isdigit(input[i])) {
			if (input[i] == '.' && !hasDecimal)
				hasDecimal = true;
			else if (input[i] == 'f' && i == input.size() - 1)
				data::_hasF = true;
			else {
				data::_isNbr = false;
				break ;
			}
		}
	}
	//
	if (data::_isNbr == true) {
		size_t found = input.find('.');
		if (data::_hasF == true) {
			data::_float = atof(input.c_str());
			return (convertFromFloat());
		}
		else if (found != std::string::npos) {
			data::_double = atof(input.c_str());
			return (convertFromDouble());
		}
		else {
			data::_int = atoi(input.c_str());
			return (convertFromInt());
		}
	}
	else {
		for (size_t i = 0; i < 6; i++) {
			if (literals[i].compare(input) == 0) {
				data::_isLiterals = true;
				data::_literal = literals[i];
				return (convertFromLiteral(input));
			}
		}
	}
};
