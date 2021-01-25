#include <iostream>
using namespace std;

class First {
private:
	char* strOne;
public:
	First(const char* str) {
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First() {
		cout << "~First()" << endl;
		delete[] strOne;
	}
};

class Second : public First {
private:
	char* strTwo;
public:
	Second(const char* one,const char* two) : First(one) {
		strTwo = new char[strlen(two) + 1];
	}
	~Second() {
		cout << "~Second()" << endl;
		delete[] strTwo;
	}
};

int main() {
	First* ptr = new Second("simple", "complex");
	delete ptr;
	return 0;
}