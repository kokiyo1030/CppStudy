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
		cout << "����ID: " << accId << endl;
		cout << "�̸�: " << name << endl;
		cout << "�ܾ�: " << balance << endl;
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
		cout << "����: ";
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
			cout << "���α׷��� �����մϴ�" << endl;
			return 0;
		default:
			cout << "�߸��� ��ȣ�Դϴ�" << endl;
			cout << endl;
			break;
		}
	}
}

void ShowMenu() {
	cout << "------Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�̸�: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, name, balance);
}

void DepositMoney() {
	int id;
	int balance;

	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccId() == id) {
			accArr[i]->DepositBalance(balance);
			cout << "�ԱݿϷ�" << endl;
			cout << endl;
			break;
		}
	}
	cout << "�������� �ʴ� ���� ID�Դϴ�" << endl;
	cout << endl;
}

void WithdrawMoney() {
	int id;
	int balance;

	cout << "[��    ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> balance;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccId() == id) {
			accArr[i]->WithdrawBalance(balance);
			cout << "��ݿϷ�" << endl;
			cout << endl;
			break;
		}
	}
	cout << "�������� �ʴ� ���� ID�Դϴ�" << endl;
	cout << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->GetInfo();
		cout << endl;
	}
	cout << endl;
}
