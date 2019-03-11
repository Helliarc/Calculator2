#include <iostream>

double num1()
{
	while (true)
	{
		std::cout << "Enter your first number: ";
		double x{};
		std::cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char oper1()
{
	std::cout << "Enter your operator(+,-,*,/): ";
	char op1{};
	std::cin >> op1;
	while (!(op1 == '+' || op1 == '-' || op1 == '*' || op1 == '/'))
	{
		std::cout << "Wrong operator used, enter a valid operator: ";
		std::cin >> op1;
	}

	return op1;

}

double num2()
{
	while (true)
	{
		std::cout << "Enter your second number: ";
		double y{};
		std::cin >> y;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return y;
		}
	}
}

double sol(double& number1, char& operator1, double& number2)
{
	std::cout << "The solution is: ";
	double solution{0};
	if (operator1 == '+')	//If statement if + operator (43) is entered by user.
	{
		solution = number1 + number2;
		return solution;
	}
	
	else if (operator1 == '-')	//If statement if - operator (45) is entered by user.
	{
		solution = number1 - number2;
		return solution;
	}
	else if (operator1 == '*')	//If statement if * operator (42) is entered by user.
	{
		solution = number1 * number2;
		return solution;
	}
	else if (operator1 == '/')	//If statement if / operator (47) is entered by user.
	{
		solution = number1 / number2;
		return solution;
	}
	
	else {							//If statement if (invalid) operator is entered by user.
		std::cout << "You chose an invalid operator!";
		return 0;
	}
}