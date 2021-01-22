#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPosition(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard {
private:
	char* name;
	char* company;
	char* tel;
	int grade;
public:
	NameCard(char* name1, char* company1, char* tel1, int grade1) : grade(grade1) {
		name = new char[strlen(name1) + 1];
		company = new char[strlen(company1) + 1];
		tel = new char[strlen(tel1) + 1];
		strcpy(name, name1);
		strcpy(company, company1);
		strcpy(tel, tel1);
	};
	NameCard(const NameCard& copy) : grade(copy.grade) {
		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		tel = new char[strlen(copy.tel) + 1];
		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(tel, copy.tel);
	}
	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << tel << endl;
		cout << "직급: ";
		COMP_POS::ShowPosition(grade);
		cout << endl;
	}
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] tel;
	}
};

int main() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}