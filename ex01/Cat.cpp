/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:12:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 18:23:42 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other), brain ( new Brain(*other.brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
	
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);	
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meow Meow Meow!" << std::endl;
}

void Cat::setIdea(int i, const std::string& idea)
{
	if(brain)
	{
		brain->setIdea(i, idea);
	}
	else
		perror("No Brainnnn!!!!");
}

std::string Cat::getIdea(int i) const
{
	if(brain)
		return brain->getIdea(i);
	else
	{
		std::cout << "Error: No BRAIN!!!\n";
		return "";
	}
}