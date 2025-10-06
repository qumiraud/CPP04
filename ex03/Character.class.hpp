/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:30:54 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/06 14:58:40 by qumiraud         ###   ########.fr       */
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
		AMateria**	_uselessItem;
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
		void			fillUselessItem(AMateria * Item);
};



#endif
