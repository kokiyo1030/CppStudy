#include <iostream>

void MyFunc() {
	std::cout << "MyFunc() called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main() {
	MyFunc();
	MyFunc('e');
	MyFunc(2, 4);
	return 0;
}