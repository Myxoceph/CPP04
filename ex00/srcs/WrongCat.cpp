/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:14:11 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/27 13:14:12 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << GREEN"Default constructor for "RED << this->type << GREEN" called."RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << GREEN"Default destructor for "RED << this->type << GREEN" called."RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << WHITE"The " << RED"WrongCat" << WHITE" goes : " << RED"\"Meow Meoww~~\"" << std::endl;
}
