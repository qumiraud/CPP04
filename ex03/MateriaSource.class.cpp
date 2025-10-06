/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:47:24 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 15:42:44 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

void		MateriaSource::learnMateria(AMateria * m)
{
	static int	i = 0;
	if (i == 4)
		return ;
	this->_storage[i] = m;
	i++;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return ( new Ice(type) );
	else if (type == "cure")
		return ( new Cure(type) );
	else
		return (NULL);
}

MateriaSource const &	MateriaSource::operator=(MateriaSource const & other)
{
	if (this != &other)
	{
		*(this)->_storage = *(other)._storage;
	}
	return (*this);
}

MateriaSource::MateriaSource( void )
{
	for(int i = 0; i < 4; i++)
		this->_storage[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	for(int i = 0; i < 4; i++)
		this->_storage[i] = other._storage[i]->clone();
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; this->_storage[i] != NULL; i++)
	// {
		if (this->_storage[i])
			// delete this->_storage[i];
	// }
	std::cout << "MateriaSource destructor called" << std::endl;
}