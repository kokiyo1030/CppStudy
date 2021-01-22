#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Person {
private:
	int age;
	char name[50];
public:
	Person(int age, const char* name) : age(age) {
		strcpy(this->name, name);
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const {
		cout << "I am " << age << "years old" << endl;
	}
};

class UnivStudent : public Person {
private:
	char major[50];
public:
	UnivStudent(const char* name, int age, const char* major) : Person(age, name) {
		strcpy(this->major, major);
	}
	void WhoAreYou() const {
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent ustd1("Lee", 22, "CS");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "ES");
	ustd2.WhoAreYou();
	return 0;
}