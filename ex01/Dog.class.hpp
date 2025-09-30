/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:39 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 10:17:44 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal
{
	private:
		Brain* _DogBrain;
	public:
		Dog();
		Dog(Dog const & other);
		~Dog();

		Dog const &	operator=(Dog const & other);

		void		makeSound( void ) const;
		// std::string	getType( void ) const;
};


#endif
