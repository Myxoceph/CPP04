/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:17:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 18:20:03 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << GREEN"Default constructor for "CYAN << this->type << GREEN" called."RESET << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	this->type = copy.type;
	this->brain = copy.brain;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << GREEN"Default destructor for "CYAN << this->type << GREEN" called."RESET << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << WHITE"The " << CYAN"Dog" << WHITE" goes : " << CYAN"\"Bark Barkk~~\"" << std::endl;
}

std::string Dog::getIdeas(int index)
{
	return (this->brain->getIdeas(index));
}

void Dog::setIdeas(int index, std::string idea)
{
	this->brain->setIdeas(index, idea);
}
