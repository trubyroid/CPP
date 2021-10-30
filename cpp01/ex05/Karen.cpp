#include "Karen.hpp"

#define QANTITY_COMAND 4

void Karen::debug(void) {
	std::cout << "Karen: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}
void Karen::info(void) {
	std::cout << "Karen: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}
void Karen::warning(void) {
	std::cout << "Karen: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}
void Karen::error(void) {
	std::cout << "Karen: This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level) {
	ptrFunc ArrPtrFunc[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i != QANTITY_COMAND; i++){
		if (commands[i] == level)
			(this->*ArrPtrFunc[i])();
	}
}
