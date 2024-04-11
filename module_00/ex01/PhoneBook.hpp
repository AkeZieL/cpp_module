/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:04:39 by mbilly            #+#    #+#             */
/*   Updated: 2023/09/08 06:56:02 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void how_to_use(void) const;
		void display_contact(void) const;
		void search_contact(void) const;
		void add_contact(void);
		int get_input(void) const;
};
