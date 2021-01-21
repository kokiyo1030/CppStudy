#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL));

	int num[5];

	for (int i = 0; i < 5; i++) {
		num[i] = rand() % 100;
		cout << "num" << i << ": " << num[i] << endl;
	}
}