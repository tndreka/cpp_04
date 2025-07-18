/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 05:12:06 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/17 17:56:43 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

	class Cat : public Animal
	{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat& other);
		~Cat();
		void makeSound() const override;
		//Getter & setter for IDEAS
		std::string getIdea(int i )const;
		void setIdea(int i,const std::string& idea);
	};
	
#endif