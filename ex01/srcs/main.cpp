/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:20:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 17:17:50 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();

	// std::cout << std::endl;

	// delete dog;
	// delete cat;
	// std::cout << std::endl;
	// std::cout << std::endl;
	
	std::cout << "-------------------" << std::endl;
	Dog brian;
	Cat garfield;
	Dog brianCopy = brian;
    Cat garfieldCopy = garfield;

	std::cout << std::endl;
	
    std::cout << "Modifying original dog's brain" << std::endl;
    brian.setIdeas(0, "New idea for Medor");
    
    std::cout << "Original dog's idea: " << brian.getIdeas(0) << std::endl;
    std::cout << "Copied dog's idea: " << brianCopy.getIdeas(0) << std::endl;

    std::cout << std::endl;

	std::cout << "-------------------" << std::endl;


	// const Animal	*(animal_array[4]);
	// std::cout << std::endl;
	// for (int i = 0; i < 2; i++)
	// 	animal_array[i] = new Dog();
	// std::cout << std::endl;
	// for (int i = 2; i < 4; i++)
	// 	animal_array[i] = new Cat();
	// std::cout << std::endl;

	// for (int i = 0; i < 4; i++)
	// 	delete animal_array[i];
	// std::cout << std::endl;

}
