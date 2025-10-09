/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:48:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/10/09 13:00:43 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
	int					i;
	const Animal*		group[10];

	for(i = 0; i < 5; i++)
	{
		group[i] = new Dog();
	}
	std::cout << std::endl << std::endl << std::endl;
	for(i = 5; i < 10; i++)
	{
		group[i] = new Cat();
	}
	std::cout << std::endl << std::endl << std::endl;
	std::cout << group[7]->getIdeaBrain(52) << std::endl;
	std::cout << group[4]->getIdeaBrain(99) << std::endl;
	std::cout << group[0]->getIdeaBrain(0) << std::endl;
	std::cout << std::endl << std::endl << std::endl;
	for(i = 0; i < 10; i++)
		delete group[i];
	return (0);
}
