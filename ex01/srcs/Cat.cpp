/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:15:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 16:54:56 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << GREEN"Default constructor for "YELLOW << this->type << GREEN" called."RESET << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << GREEN"Default destructor for "YELLOW << this->type << GREEN" called."RESET << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << WHITE"The " << YELLOW"Cat" << WHITE" goes : " << YELLOW"\"Meow Meoww~~\"" << std::endl;
}

std::string Cat::getIdeas(int index)
{
	return (this->brain->getIdeas(index));
}

void Cat::setIdeas(int index, std::string idea)
{
	this->brain->setIdeas(index, idea);
}
