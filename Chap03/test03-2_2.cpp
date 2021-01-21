#include <iostream>
#include <cstring>
#pragma warning (disable: 4996)
using namespace std;

class Printer {
private:
	char str[30];

public:
	void setString(const char* s) {
		strcpy(str, s);
	}

	void showString() {
		cout << str << endl;
	}
};

int main() {
	Printer pnt;
	pnt.setString("Hello World");
	pnt.showString();

	pnt.setString("I love C++");
	pnt.showString();
	return 0;
}