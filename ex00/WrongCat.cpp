/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:08:59 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 17:49:35 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    // Default constructor
    std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    //Copy constructor
    std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    // Assignment operator
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    // Destructor
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound  !  !  ! " << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}