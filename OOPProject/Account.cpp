#include "Account.h"
#include "BankingCommonDecl.h"

Account::Account(int ID, int money, char* name) : accID(ID), balance(money) {
	cusName = new char[strlen(name) + 1];
	strcpy(cusName, name);
}

Account::Account(const Account& ref) : accID(ref.accID), balance(ref.balance) {
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
}

Account::~Account() {
	delete[] cusName;
}

int Account::GetAccID() const {
	return accID;
}

void Account::Deposit(int money) {
	balance += money;
}

int Account::Withdraw(int money) {
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const {
	cout << "°èÁÂID: " << accID << endl;
	cout << "ÀÌ  ¸§: " << cusName << endl;
	cout << "ÀÜ  ¾×: " << balance << endl;
	cout << endl;
}