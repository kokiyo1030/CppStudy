#include <iostream>

int main() {
	char name[20];
	char phone[20];

	std::cout << "이름 입력: ";
	std::cin >> name;
	std::cout << "휴대폰 번호 입력: ";
	std::cin >> phone;

	std::cout << "이름: " << name << std::endl;
	std::cout << "휴대폰 번호: " << phone << std::endl;
}