/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:26:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 21:49:42 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

std::string const &	Character::getName( void ) const
{
	return (this->_nameChar);
}

Character const &	Character::operator=(Character const & other)
{
	if (this != &other)
	{
		this->_nameChar = other.getName();
		for(int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
	}
	return (*this);
}

std::string const &	Character::getName( void ) const
{
	return (this->_nameChar);
}

Character const &	Character::operator=(Character const & other)
{
	if (this != &other)
	{
		this->_nameChar = other.getName();
		for(int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
	}
	return (*this);
}

Character::Character( void )
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string const & name) : _nameChar(name)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character Parameter constructor called" << std::endl;
}

Character::Character(Character const & other) : _nameChar(other._nameChar)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character Copy constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}
