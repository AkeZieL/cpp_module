/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:19:52 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/17 13:05:37 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << std::endl;
	std::list<int> l;
	l.push_front(5);
	l.push_front(17);
	std::cout << "front: " << l.front() << std::endl;
	l.pop_front();
	std::cout << "front: " << l.front() << std::endl;
	std::cout << "size: " << l.size() << std::endl;
	l.push_front(3);
	l.push_front(5);
	l.push_front(737);
	l.push_front(0);

	std::list<int>::iterator it1 = l.begin();
	std::list<int>::iterator it2 = l.end();
	it1++;
	it1--;
	while (it1 != it2)
	{
		std::cout << *it1 << std::endl;
		it1++;
	}

	return 0;
}
