/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:11:20 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/13 05:18:30 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    // Default constructor
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(const Animal &other)
{
    //Copy constructor
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    // Assignment operator
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    // Destructor
    std::cout << "Animal destructor called" << std::endl;
}
