/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:57 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 12:41:24 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	_DogBrain = new Brain();
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _DogBrain;
	std::cout << "Dog destructor called" << std::endl;
}
Dog const &	Dog::operator=(Dog const & other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog make sound for play with you!" << std::endl;
}
