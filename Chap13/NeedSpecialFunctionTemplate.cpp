#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

int main() {
	cout << Max(1, 6) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.6, 2.2) << endl;
	cout << Max("Simple", "Best") << endl;
	return 0;
}