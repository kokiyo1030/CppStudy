#include <iostream>
#include <cstring>
#pragma warning (disable: 4996)
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& copy) : age(copy.age) {
		int len = strlen(copy.name) + 1;
		this->name = new char[len];
		strcpy(this->name, copy.name);
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called distructor" << endl;
	}
};

int main() {
	Person man1("Lee dong woo", 29);
	Person man2(man1);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}