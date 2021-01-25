#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main() {
	AccountHandler handler;
	int select;

	while (true) {
		handler.ShowMenu();
		cout << "선택: ";
		cin >> select;
		cout << endl;

		switch (select) {
		case MAKE:
			handler.MakeAccount();
			break;
		case DEPOSIT:
			handler.DepositMoney();
			break;
		case WITHDRAW:
			handler.WithdrawMoney();
			break;
		case INQUIRE:
			handler.ShowAllAccInfo();
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
	return 0;
}