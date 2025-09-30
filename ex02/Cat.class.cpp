/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:50:10 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 12:54:49 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() : AAnimal()
{
	_type = "Cat";
	_CatBrain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & other) : AAnimal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _CatBrain;
	std::cout << "Cat destructor called" << std::endl;
}
Cat const &	Cat::operator=(Cat const & other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat say MIIIAoumiam cause is hungry!" << std::endl;
}
