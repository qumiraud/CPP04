/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:39 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/29 22:09:28 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();

		Dog const &	operator=(Dog const & other);

		void		makeSound( void ) const;
		// std::string	getType( void ) const;
};


#endif
