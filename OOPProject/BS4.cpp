#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

class Account {
private:
	int accId;
	int balance;
	char* name;
public:
	Account(int accId, char* name, int balance) : accId(accId), balance(balance) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	Account(const Account& copy) : accId(copy.accId), balance(copy.balance) {
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
	}
	int GetAccId() const {
		return accId;
	}
	void DepositBalance(int balance) {
		this->balance += balance;
	}
	void WithdrawBalance(int balance) {
		this->balance -= balance;
	}
	void GetInfo() const {
		cout << "계좌ID: " << accId << endl;
		cout << "이름: " << name << endl;
		cout << "잔액: " << balance << endl;
		cout << endl;
	}
	~Account() {
		delete[] name;
	}
};

Account* accArr[100];
int accNum = 0;

int main() {
	int select = 0;

	while (true) {
		ShowMenu();
		cout << "선택: ";
		cin >> select;
		cout << endl;

		switch (select) {
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			cout << "프로그램을 종료합니다" << endl;
			return 0;
		default:
			cout << "잘못된 번호입니다" << endl;
			cout << endl;
			break;
		}
	}
}

void ShowMenu() {
	cout << "------Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, name, balance);
}

void DepositMoney() {
	int id;
	int balance;

	cout << "[입    금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccId() == id) {
			accArr[i]->DepositBalance(balance);
			cout << "입금완료" << endl;
			cout << endl;
			break;
		}
	}
	cout << "존재하지 않는 계좌 ID입니다" << endl;
	cout << endl;
}

void WithdrawMoney() {
	int id;
	int balance;

	cout << "[출    금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccId() == id) {
			accArr[i]->WithdrawBalance(balance);
			cout << "출금완료" << endl;
			cout << endl;
			break;
		}
	}
	cout << "존재하지 않는 계좌 ID입니다" << endl;
	cout << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->GetInfo();
		cout << endl;
	}
	cout << endl;
}
