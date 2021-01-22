#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Person {
private:
	char* name;
public:
	Person(const char* name) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	~Person() {
		delete[] name;
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
private:
	char* major;
public:
	UnivStudent(const char* name, const char* major) : Person(name) {
		this->major = new char[strlen(major) + 1];
		strcpy(this->major, major);
	}
	~UnivStudent() {
		delete[] major;
	}
	void WhoAreYou() const {
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}