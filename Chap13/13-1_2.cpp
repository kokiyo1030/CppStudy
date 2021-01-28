#include <iostream>
using namespace std;

template <typename T>
T SumArray(T arr[], int len) {
	T sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int arr1[] = { 10, 20, 30 };
	cout << SumArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	double arr2[] = { 10.1, 20.2, 30.3 };
	cout << SumArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
	return 0;
}