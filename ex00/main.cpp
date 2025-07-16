/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 17:03:05 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	
	// Animal *first_an = new Animal();
	Animal *sec_an = new Dog();
	Animal *third_an = new Cat();

	std:: cout << sec_an->getType() << std::endl;
	std:: cout << third_an->getType() << std::endl;
	sec_an->makeSound();
	third_an->makeSound();
	// first_an->makeSound();
	
	// delete first_an;
	delete sec_an;
	delete third_an;
	return 0;
}