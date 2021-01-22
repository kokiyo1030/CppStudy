#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class MyFriendInfo {
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* name, int age) : age(age) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	~MyFriendInfo() {
		delete[] name;
	}
	void ShowMyFriendInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name, int age, const char* addr, const char* phone) : MyFriendInfo(name, age) {
		this->addr = new char[strlen(addr) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->addr, addr);
		strcpy(this->phone, phone);
	}
	~MyFriendDetailInfo() {
		delete[] addr;
		delete[] phone;
	}
	void ShowMyFriendDetailInfo() const {
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl << endl;
	}
};

int main() {
	MyFriendDetailInfo detail("������", 26, "����", "010-9317-1040");
	detail.ShowMyFriendDetailInfo();
	return 0;
}