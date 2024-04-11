/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:06:20 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/14 16:19:33 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& other) : std::stack<T>(other) {}
		~MutantStack() {}
		
		iterator begin(void) {
		       	return this->c.begin();
		}
		iterator end(void) {
			return this->c.end();
		}
};
