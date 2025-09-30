/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 12:55:45 by qumiraud         ###   ########.fr       */
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
	// const Animal*		solo = new Animal();

	for(i = 0; i < 5; i++)
	{
		group[i] = new Dog();
		group[i]->makeSound();
	}
	for(i = 5; i < 10; i++)
	{
		group[i] = new Cat();
		group[i]->makeSound();
	}
	for(i = 0; i < 10; i++)
		delete group[i];
	return (0);
}
