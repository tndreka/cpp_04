/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/18 15:30:27 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include  "Cat.hpp"

/*
	ABSTRACT CLASS
	is an class that can not be instatieted directly. 
	it is designed to serve as a base class for other classes.
	In the abstract class we define a method that the derived classes must implement;
	=> IN an Abstract class there is at leat 1 [pure vitual function].
	-> A pure Virtual function is declared and assigned 0, has no implemention in the
	Base class and must be overriden in the derived class. this will make the base class
	ABSTRACT.
*/

int main()
{
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	std::cout <<"First AAnimal: " << dog->getType() << std::endl;
	std::cout <<"Second AAnimal: " << cat->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	
	delete cat;
	delete dog;
	
	return 0;
}