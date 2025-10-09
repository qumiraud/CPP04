/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 12:41:53 by qumiraud         ###   ########.fr       */
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
	const Animal* j = new Dog();//an instance of Dog with the Parent Animal type
	const Animal* i = new Cat();//an instance of Cat with the Parent Animal type
	const WrongAnimal* k = new WrongCat();//an instance of WrongCat with the Parent WrongAnimal type without virtual method, so no inheritance
	const WrongCat* l = new WrongCat();//an instance of WrongCat with the WrongCat type
	// const Animal* i = new WrongCat(); parent with wrong child
	// const WrongAnimal* i = new Cat(); wrong parent with child
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	k->makeSound();
	l->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete k;
	delete l;
	delete meta;
	return (0);
}
