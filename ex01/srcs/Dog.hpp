/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:10:57 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 18:11:12 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private : 
		Brain *brain;

	public :
		void makeSound() const;
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		~Dog();
		void setIdeas(int index, std::string idea);
		std::string getIdeas(int index);
};

#endif
