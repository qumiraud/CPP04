/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:30:54 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 22:25:20 by qumiraud         ###   ########.fr       */
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
		AMateria*	_uselessItem[];
	public:
		Character( void );
		Character(std::string const & name);
		Character(Character const & other);
		~Character();

		Character const &	operator=(Character const & other);
		std::string const & getName( void ) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter & target);
};

void	Character::use(int idx, ICharacter & target)
{
	this->_inventory[idx]->use(target);
}

void	Character::equip(AMateria* m)
{
	static int	i = 0;

	if (i == 5)
	{
		std::cout << "no option to keep the spell in your inventory" << std::endl;
		return ;
	}
	this->_inventory[i] = m;
	i++;
}

void	Character::unequip(int idx)
{
	static int	i = 0;

	this->_uselessItem[i] = this->_inventory[idx];
	i++;
	this->_inventory[idx] = NULL;
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
		this->_inventory[i] = other._inventory[i]->clone();
	std::cout << "Character Copy constructor called" << std::endl;
}

Character::~Character()
{
	delete [] this->_inventory;
	delete [] this->_uselessItem;
	std::cout << "Character destructor called" << std::endl;
}


#endif
