/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:30:54 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 15:58:16 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.class.hpp"

class Character : public ICharacter
{
	private:
		std::string	_nameChar;
		AMateria*	_inventory[4];
	public:
		Character( void );
		Character(std::string const & name);
		Character(Character const & other);
		~Character();

		Character const &	operator=(Character const & other);
		std::string const & getName( void ) const;
};

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


#endif