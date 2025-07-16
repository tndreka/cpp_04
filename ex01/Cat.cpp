/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:12:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 19:58:42 by tndreka          ###   ########.fr       */
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