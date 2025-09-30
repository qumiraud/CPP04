/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/30 09:35:19 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
	const Animal* meta = new Animal();//an instance of parent class
	const Animal* i = new Cat();//an instance of Cat with the Parent Animal type
	const Animal* j = new Dog();//an instance of Dog with the Parent Animal type
	const WrongAnimal* k = new WrongCat();//an instance of WrongCat with the Parent WrongAnimal type
	// const Animal* i = new WrongCat(); parent with wrong child
	// const WrongAnimal* i = new Cat(); wrong parent with child
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete k;
	delete meta;
	return (0);
}
