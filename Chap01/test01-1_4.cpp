#include <iostream>

int main() {
	int wage = 50;
	float percent = 0.12;
	int bonus = 0;
	int total_wage = 0;

	while (true) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> bonus;
		if (bonus == -1) {
			std::cout << "프로그램을 종료합니다" << std::endl;
			break;
		}
		total_wage = wage + (bonus * percent);
		std::cout << "이번달 급여: " << total_wage << std::endl;
	}
}