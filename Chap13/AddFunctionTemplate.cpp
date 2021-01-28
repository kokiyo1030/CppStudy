#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2) {
	return num1 + num2;
}

int main() {
	cout << Add(15, 20) << endl;
	cout << Add(2.9, 4.7) << endl;
	cout << Add<int>(1.3, 6.2) << endl;
	cout << Add<double>(3.14, 2.74) << endl;
	return 0;
}