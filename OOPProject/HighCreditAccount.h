#ifndef __HIGHCREDITACCOUNT_H__
#define __HIGHCREDITACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {
private:
	int gradeRate;
public:
	HighCreditAccount(int accId, int balance, char* name, int interest, int grade)
		: NormalAccount(accId, balance, name, interest), gradeRate(grade) {}
	virtual void Deposit(int money) {
		NormalAccount::Deposit(money);
		Account::Deposit(money * (gradeRate / 100.0));
	}
};

#endif // !__HIGHCREDITACCOUNT_H__