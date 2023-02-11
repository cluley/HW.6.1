#include <iostream>
#include "addition.h"
#include "substraction.h"
#include "multiplication.h"
#include "division.h"
#include "exponentiation.h"

int main(int argc, char** argv) {
	do {
		std::cout << "Введите первое число: ";
		int var1 = 0;
		std::cin >> var1;

		std::cout << "Введите второе число: ";
		int var2 = 0;
		std::cin >> var2;

		std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - выход из программы): ";
		int input = 0;
		std::cin >> input;

		switch (input) {
		case 1:
			std::cout << var1 << " + " << var2 << " = " << sum(var1, var2) << std::endl;
			break;
		case 2:
			std::cout << var1 << " - " << var2 << " = " << diff(var1, var2) << std::endl;
			break;
		case 3:
			std::cout << var1 << " умножить на " << var2 << " = " << mult(var1, var2) << std::endl;
			break;
		case 4:
			std::cout << var1 << " разделить на " << var2 << " = " << division(var1, var2) << std::endl;
			break;
		case 5:
			std::cout << var1 << " в степени " << var2 << " = " << power(var1, var2) << std::endl;
			break;
		case 6:
			exit(0);
		default:
			std::cout << "Такой операции не существует" << std::endl;
			break;
		}
	} while (true);

	return 0;
}