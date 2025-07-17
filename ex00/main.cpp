/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 16:58:15 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*
	POLYMOPHISM
	IN  C++ this allow objecs, functions or methods to take on multiple forms.
	we have Animal CLASS that serves as a base Class.
	DOG & CAT class that inherits Animal and override the virtual function makeSound()
	WrongAnimal & WrongCat example when polymorphism FAILS necause of not correct implementation (missing virtual).
*/
int main()
{
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_kitty = new WrongCat();
	
	std::cout << w_kitty->getType() << " " << std::endl;
	w_kitty->makeSound(); // Non -virtual :: ooutputs the WrongAnimal 
	w_meta->makeSound();

	delete w_meta;
	delete w_kitty;

	return 0;
}