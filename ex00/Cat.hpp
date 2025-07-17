/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:12:06 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 16:50:06 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

	class Cat : public Animal
	{
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat& other);
		~Cat();
		void makeSound() const override; 
		// with the #override in Cat class we ensurethat the makeSound() in 
		//the choosed class is overriding a virtual function from the base class Animal.
	};
	
#endif