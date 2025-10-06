/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:26:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 15:37:01 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

void	Character::use(int idx, ICharacter & target)
{
	// if (idx < 0)
		// return;
	if ((idx >=0 && idx <= 3) && this->_inventory[idx] )
		this->_inventory[idx]->use(target);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	if (m == NULL)
	{
		std::cout << "nothing to equip" << std::endl;
		return ;
	}
	while (i < 4 && this->_inventory[i])
	{
		i++;
	}
	if (i >= 4)
	{
		std::cout << "no option to keep the spell in your inventory" << std::endl;
		fillUselessItem( m );
		return ;
	}
	this->_inventory[i] = m->clone();
	std::cout << this->getName() << " equip " << m->getType() << " in the inventory slot " << i << std::endl;
}

void	Character::unequip(int idx)
{
		fillUselessItem( this->_inventory[idx] );
		this->_inventory[idx] = NULL;
		std::cout << this->getName() << " unequip the spell in the slot " << idx << " of this inventory." << std::endl;
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

void	Character::fillUselessItem(AMateria * Item)
{
	int	i = 0;

	while (this->_uselessItem[i])
		i++;
	AMateria **	newTab = new AMateria*[i + 2];
	for (int j = 0; j < i; j++ )
		newTab[j] = this->_uselessItem[j];
	newTab[i] = Item;
	newTab[i + 1] = NULL;
	delete[] this->_uselessItem;
	this->_uselessItem = newTab;
}

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	this->_uselessItem = new AMateria *[1];
	this->_uselessItem[0] = NULL;
	std::cout << "Character Default constructor called " << this->_nameChar <<std::endl;
}

Character::Character(std::string const & name) : _nameChar(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	this->_uselessItem = new AMateria *[1];
	this->_uselessItem[0] = NULL;
	std::cout << "Character Parameter constructor called " << this->_nameChar <<std::endl;
}

Character::Character(Character const & other) : _nameChar(other._nameChar)
{
	for(int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	}
	std::cout << "Character Copy constructor called " << this->_nameChar << std::endl;
}

Character::~Character()
{
	delete [] this->_uselessItem;

	std::cout << "Character destructor called" << std::endl;
}