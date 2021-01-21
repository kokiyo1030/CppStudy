#include <iostream>
#include <string.h>
#pragma warning (disable:4996)
using namespace std;

char* MakeStrAdr(int len) {
	char* str = new char[len];
	return str;
}

int main() {
	char* str = MakeStrAdr(20);
	strcpy(str, "i am so happy");
	cout << str << endl;
	delete []str;
	return 0;
}