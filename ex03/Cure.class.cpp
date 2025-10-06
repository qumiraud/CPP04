/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:10:50 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 10:48:10 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure *	Cure::clone( void ) const
{
	Cure*	cureClone = new Cure(*this);
	return (cureClone);
}

Cure const &	Cure::operator=(Cure const & other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(std::string const & cure) : AMateria(cure)
{
	std::cout << "Parameter Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & other) : AMateria(other)
{
	std::cout << "Copy Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}