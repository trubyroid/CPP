#include "Zombie.hpp"

void Zombie::announce (void) {
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie (void) {
	delete this;
}