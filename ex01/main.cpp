/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 19:51:10 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int array_size = 10;
	const Animal *animals[array_size];
	
	// half array of dogs = 5
	for (int i = 0; i < array_size / 2; i++)
	{
		animals[i] = new Dog();
	}
	// half array of cats = 5	
	for (int i = array_size / 2; i < array_size; i++)
	{
		animals[i] = new Cat();
	}
	//delete the array
	for (int i = 0; i < array_size; i++)
	{
		delete animals[i];
	}
	return 0;
}