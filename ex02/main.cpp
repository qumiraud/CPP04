/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 13:03:39 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
	int					i;
	const AAnimal*		group[10];
	// const AAnimal*		solo = new AAnimal(); //does not compil cause AbstractClass

	for(i = 0; i < 5; i++)
	{
		group[i] = new Dog();
		group[i]->makeSound();
	}
	std::cout << std::endl << std::endl << std::endl;
	for(i = 5; i < 10; i++)
	{
		group[i] = new Cat();
		group[i]->makeSound();
	}
	std::cout << std::endl << std::endl << std::endl;
	for(i = 0; i < 10; i++)
		delete group[i];
	return (0);
}
