/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:10:11 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:48:24 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice *	Ice::clone( void ) const
{
	Ice*	iceClone = new Ice(*this);
	return (iceClone);
}

Ice const &	Ice::operator=(Ice const & other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(std::string const & ice) : AMateria(ice)
{
	std::cout << "Parameter Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & other) : AMateria(other)
{
	std::cout << "Copy Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}