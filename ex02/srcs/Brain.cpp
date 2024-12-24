#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN"Default constructor for " << BLUE"Brain"GREEN << " called!"RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << GREEN"Default destructor for " << BLUE"Brain"GREEN << " called!"RESET << std::endl;
}

void Brain::setIdeas(int index, std::string idea)
{
	if(index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string Brain::getIdeas(int index)
{
	if(index >= 0 && index < 100)
		return(this->ideas[index]);
	else
		return ("Out of bounds..");
}
