#include <iostream>

int main() {
	int num;

	std::cout << "���� �Է�: ";
	std::cin >> num;

	std::cout << "������ " << num << "�� ���" << std::endl;
	for (int i = 1; i <= 9; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}