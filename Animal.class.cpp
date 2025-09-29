/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:16 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/29 22:09:10 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & other) : _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal const &	Animal::operator=(Animal const & other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "This Animal make a loud sounds!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	if (this->_type.empty())
		return ("no type for this");
	return (this->_type);
}
