#include <iostream>

int main() {
	int num;

	std::cout << "숫자 입력: ";
	std::cin >> num;

	std::cout << "구구단 " << num << "단 출력" << std::endl;
	for (int i = 1; i <= 9; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}