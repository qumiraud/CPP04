/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:49:28 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/29 15:55:04 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <cstdlib>
# include <iostream>

class Animal
{
private:
	/* data */
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal const & other);
	~Animal();

};

Animal::Animal()
{
}

Animal::~Animal()
{
}


#endif