#include "Brain.hpp"

void Brain::setIdeas(int index, std::string idea)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdeas(int index)
{
	return(this->ideas[index]);	
}

