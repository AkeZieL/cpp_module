/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbilly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:18:00 by mbilly            #+#    #+#             */
/*   Updated: 2023/12/15 01:48:49 by mbilly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
Array<T>::Array(void) : _array(NULL) {
	std::cout << "default constructor called" << std::endl;
};

template <typename T>
Array<T>::Array(unsigned int size) : _size(size) {
	this->_array =  new T[this->_size];
	std::cout << "size constructor called" << std::endl;
};

template<typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
	std::cout << "destructor called" << std::endl;
};

template <typename T>
Array<T>::Array(Array const &copy) {
	*this = copy;
};

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy) {
	this->_size = copy.size();
	this->_array = new T[copy.size()];
	for (size_t i = 0; i < copy.size(); i++) {
		this->_array[i] = copy._array[i];
	}
	return *this;
};

template <typename T>
T& Array<T>::operator[](unsigned int size) {
	if (size < this->_size)
		return this->_array[size];
	else
		throw Operator();
};

template <typename T>
unsigned int Array<T>::size(void) const {
	return (this->_size);
};

//template class Array<int>;
