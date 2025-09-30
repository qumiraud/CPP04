/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:17:02 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 09:28:23 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat const &	WrongCat::operator=(WrongCat const & other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat say Mayou naise!" << std::endl;
}
