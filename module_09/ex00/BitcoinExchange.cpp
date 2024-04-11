/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:23:53 by mbilly            #+#    #+#             */
/*   Updated: 2024/03/07 15:48:19 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

BitcoinExchange::BitcoinExchange(void) {
	std::cout << "Default constructor called" << std::endl;
};

BitcoinExchange::~BitcoinExchange(void) {
	std::cout << "Destructor called" << std::endl;
};

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
	std::cout << "Copy constructor called" << std::endl;
};

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy) {

};

std::map<std::string, float> BitcoinExchange::getInput(void) const {

};

void BitcoinExchange::setInput(std::string date, float value) {

};
