#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Base WrongAnimal";
	std::cout << GREEN"Default constructor for WrongAnimal called."RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GREEN"Default destructor for WrongAnimal called."RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << WHITE"The base WrongAnimal sound which should be the WrongCat sound!" << std::endl;
}
