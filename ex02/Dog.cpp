/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:11:39 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/18 15:25:38 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		//here we copyed the base of the class with the brain attribute here as well.
		AAnimal::operator=(other);

		// before we assign the deep copy we clean up the brain attribute first
		delete brain;
		brain = new Brain(*other.brain);		
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "Woof Woof Woof!" << std::endl;
}

void Dog::setIdea(int i, const std::string& idea)
{
	if(brain)
	{
		brain->setIdea(i, idea);
	}
	else
		perror("No Brainnnn!!!!");
}

std::string Dog::getIdea(int i) const
{
	if(brain)
		return brain->getIdea(i);
	else
	{
		std::cout << "Error: No BRAIN!!!\n";
		return "";
	}
}