#include <iostream>
using namespace std;

typedef struct {
	int accId;
	int balance;
	char name[20];
}Account;

Account accArr[100];
int accNum = 0;
int tempId = 0;
int tempBalance = 0;

int main() {
	int select = 0;

	while (true) {
		cout << "------Menu------" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택: ";
		cin >> select;
		cout<<endl;

		switch (select) {
		case 1:
			cout << "[계좌개설]" << endl;
			cout << "계좌ID: ";
			cin >> accArr[accNum].accId;
			cout << "이름: ";
			cin >> accArr[accNum].name;
			cout << "입금액: ";
			cin >> accArr[accNum].balance;
			accNum++;
			cout << endl;
			break;
		case 2:
			cout << "[입    금]" << endl;
			cout << "계좌ID: ";
			cin >> tempId;
			cout << "입금액: ";
			cin >> tempBalance;
			for (int i = 0; i < accNum; i++) {
				if (accArr[i].accId == tempId) {
					accArr[i].balance += tempBalance;
					cout << "입금완료" << endl;
					cout << endl;
					break;
				}
			}
			cout << "존재하지 않는 계좌 ID입니다" << endl;
			cout << endl;
			break;
		case 3:
			cout << "[출    금]" << endl;
			cout << "계좌ID: ";
			cin >> tempId;
			cout << "출금액: ";
			cin >> tempBalance;
			for (int i = 0; i < accNum; i++) {
				if (accArr[i].accId == tempId) {
					accArr[i].balance -= tempBalance;
					cout << "출금완료" << endl;
					cout << endl;
				}
			}
			cout << "존재하지 않는 계좌 ID입니다" << endl;
			cout << endl;
			break;
		case 4:
			for (int i = 0; i < accNum; i++) {
				cout << "계좌ID: " << accArr[i].accId << endl;
				cout << "이름: " << accArr[i].name << endl;
				cout << "잔액: " << accArr[i].balance << endl;
				cout << endl;
			}
			cout << endl;
			break;
		case 5:
			cout << "프로그램을 종료합니다" << endl;
			return 0;
		default:
			cout << "잘못된 번호입니다" << endl;
			cout << endl;
			break;
		}
	}
}