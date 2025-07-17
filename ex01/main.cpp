/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:07:52 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 18:33:20 by tndreka          ###   ########.fr       */
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

//SUBJECT TEST INT MAIN
// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

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
	std::cout << "DAWG second idea: " << dawg.getIdea(1) << std::endl;
	
	dawg.setIdea(0, "Another ONE ! ! !");
	std::cout << "DAWG first idea after the change: " << dawg.getIdea(0) << std::endl;
	
	Cat garfield;

	garfield.setIdea(0, "To late to stop me now!!");
	std::cout << "GARFIELD first idea: " << garfield.getIdea(0) << std::endl;

	Cat copycat;
	
	copycat = garfield;
	copycat.setIdea(1, "Its not the same GARFIELD");
	std::cout << "Copyt cat idea: " << copycat.getIdea(1) << std::endl;
	std::cout << "Copyt cat 1 idea: " << copycat.getIdea(0) << std::endl;
	
	return 0;

}

