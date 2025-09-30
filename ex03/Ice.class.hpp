/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:10:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 15:23:24 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &other);
		~Ice();

		Ice const &	operator=(Ice const & other);
		AMateria*	clone( void ) const;
};

AMateria *	Ice::clone( void ) const
{
	AMateria*	iceClone = new Ice();
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

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & other) : AMateria(other)
{
	std::cout << "Copy Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}


#endif