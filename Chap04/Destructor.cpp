#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person man1("Kim Tae Hyeon", 26);
	Person man2("Kim mozzy", 5);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}