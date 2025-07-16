/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:11:29 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/16 16:37:05 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

	class Dog : public Animal
	{
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog& other);
		~Dog();
		void makeSound() const override;
	};
#endif