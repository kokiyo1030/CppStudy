#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main() {
	AccountHandler handler;
	int select;

	while (true) {
		handler.ShowMenu();
		cout << "����: ";
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
			cout << "���α׷��� �����մϴ�" << endl;
			return 0;
		default:
			cout << "�߸��� ��ȣ�Դϴ�" << endl;
			cout << endl;
			break;
		}
	}
	return 0;
}