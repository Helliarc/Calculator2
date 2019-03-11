#include <iostream>
#include "Header.h"


int main()
{
	//Gather the first float number from user
	double number1{0};
	number1 = num1();
	//Gather the operator from the user (+, -, *, /)
	char operator1{'+'};
	operator1 = oper1();
	//Gather the second float number from user
	double number2{0};
	number2 = num2();
	//calculate and return solution to screen
	double solution{ 0 };
	solution = sol (number1, operator1, number2);
	std::cout << solution;
	
	return 0;
}