/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:38:16 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 15:58:28 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

void	AMateria::use(ICharacter & target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
	return ;
}

std::string const &	AMateria::getType( void ) const
{
	return (this->_type);
}

AMateria::AMateria( void )
{
	std::cout << "Default AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parameter AMateria Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & other) : _type(other._type)
{
	std::cout << "Copy AMateria Constructor called" << std::endl;
}

AMateria const &	AMateria::operator=(AMateria const & other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}