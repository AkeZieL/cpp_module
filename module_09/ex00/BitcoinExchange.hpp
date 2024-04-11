/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:24:07 by mbilly            #+#    #+#             */
/*   Updated: 2024/03/07 15:41:14 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

class BitcoinExchange {
	private:
		std::map<std::string, float> DateValueStorage;
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &copy);

		BitcoinExchange operator=(BitcoinExchange const &copy);
		//getter
		std::map<std::string, float> getInput(void) const;
		//setter
		void	setInput(std::string date, float value);
};

#endif
