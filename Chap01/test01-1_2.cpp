#include <iostream>

int main() {
	char name[20];
	char phone[20];

	std::cout << "�̸� �Է�: ";
	std::cin >> name;
	std::cout << "�޴��� ��ȣ �Է�: ";
	std::cin >> phone;

	std::cout << "�̸�: " << name << std::endl;
	std::cout << "�޴��� ��ȣ: " << phone << std::endl;
}