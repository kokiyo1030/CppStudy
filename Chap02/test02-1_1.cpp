#include <iostream>

int plus(int& num) {
	return num++;
}

int changeSign(int& num) {
	return num *= -1;
}

int main() {
	int num1 = 2;
	int num2 = 10;

	plus(num1);
	changeSign(num2);

	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
}