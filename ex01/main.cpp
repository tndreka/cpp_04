/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 19:46:44 by tndreka          ###   ########.fr       */
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
	
	for (int i = 0; i < array_size / 2; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = array_size / 2; i < array_size; i++)
	{
		animals[i] = new Cat();
	}
	
}