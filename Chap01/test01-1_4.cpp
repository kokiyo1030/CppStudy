#include <iostream>

int main() {
	int wage = 50;
	float percent = 0.12;
	int bonus = 0;
	int total_wage = 0;

	while (true) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> bonus;
		if (bonus == -1) {
			std::cout << "���α׷��� �����մϴ�" << std::endl;
			break;
		}
		total_wage = wage + (bonus * percent);
		std::cout << "�̹��� �޿�: " << total_wage << std::endl;
	}
}