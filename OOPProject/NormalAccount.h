#ifndef __NORMALACCOUNT_H__
#define __NORMALACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account {
private:
	int interest;
public:
	NormalAccount(int accId, int balance, char* name, int interest)
		: Account(accId, balance, name), interest(interest) {}
	virtual void Deposit(int money) {
		Account::Deposit(money);
		Account::Deposit(money * (interest / 100.0));
	}
};

#endif // !__NORMALACCOUNT_H__