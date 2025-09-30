/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:16 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/29 22:09:10 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal const &	AAnimal::operator=(AAnimal const & other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "This AAnimal make a loud sounds!" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	if (this->_type.empty())
		return ("no type for this");
	return (this->_type);
}
