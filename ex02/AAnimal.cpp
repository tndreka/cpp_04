/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:44:17 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/18 15:00:29 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal:: AAnimal()
{
	std::cout << "AAnimal Deafult constructor called" <<std::endl;
}

AAnimal:: AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal Copy constructor called" <<std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal copy assignment operator called" <<std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

AAnimal:: ~AAnimal()
{
	std::cout << "AAnimal Destructor called" <<std::endl;
}