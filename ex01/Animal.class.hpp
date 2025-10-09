/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:28 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 12:54:02 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <cstdlib>
# include <iostream>
# include "Brain.class.hpp"

class Animal
{
	private:

	protected:
		std::string	_type;
	public:
		Animal();
		Animal(Animal const & other);
		virtual ~Animal();

		Animal const &	operator=(Animal const & other);

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;
		virtual std::string	getIdeaBrain( int idx ) const;


};


#endif
