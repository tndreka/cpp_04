/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:11:11 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 17:38:16 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP  

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();//virtual destrucor
		virtual void makeSound() const; // this function in Dog or Cat classes  override the makesound()
		std::string getType() const;
};

#endif