/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:11:29 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/18 15:14:03 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

	class Dog : public AAnimal // inherit the abstract class
	{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog& other);
		~Dog();
		void makeSound() const override;
		//Getter & setter for IDEAS
		std::string getIdea(int i )const;
		void setIdea(int i,const std::string& idea);
	};
#endif