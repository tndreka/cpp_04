/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 18:09:27 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

//Test case 1;
// int main()
// {
// 	const int array_size = 10;
// 	const Animal *animals[array_size];
	
// 	// half array of dogs = 5
// 	for (int i = 0; i < array_size / 2; i++)
// 	{
// 		animals[i] = new Dog();
// 	}
// 	// half array of cats = 5	
// 	for (int i = array_size / 2; i < array_size; i++)
// 	{
// 		animals[i] = new Cat();
// 	}
	//display the array
//	for(int i = 0; i < array_size; i ++)
//	{
//		std::cout << "|" << i << "|" << animals[i]->getType()<< "|" << std::endl;
//	}
// 	//delete the array
// 	for (int i = 0; i < array_size; i++)
// 	{
// 		delete animals[i];
// 	}
// 	return 0;
// }

//Deep copy test

int main()
{
	Dog pitbull;
	
	pitbull.setIdea(0, "Ca bone");
	pitbull.setIdea(1, "Mr WorldWide");
	
	std::cout << "Pitbull first idea: " << pitbull.getIdea(0) << std::endl;
	std::cout << "Pitbull second idea: " << pitbull.getIdea(1) << std::endl;	
	
	//Copy Pitbull 
	
	Dog dawg;
	dawg = pitbull;
	
	std::cout << "DAWG first idea: " << dawg.getIdea(0) << std::endl;
	
	return 0;

}

