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
		cout << "1. ���°���" << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ���" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "����: ";
		cin >> select;
		cout<<endl;

		switch (select) {
		case 1:
			cout << "[���°���]" << endl;
			cout << "����ID: ";
			cin >> accArr[accNum].accId;
			cout << "�̸�: ";
			cin >> accArr[accNum].name;
			cout << "�Աݾ�: ";
			cin >> accArr[accNum].balance;
			accNum++;
			cout << endl;
			break;
		case 2:
			cout << "[��    ��]" << endl;
			cout << "����ID: ";
			cin >> tempId;
			cout << "�Աݾ�: ";
			cin >> tempBalance;
			for (int i = 0; i < accNum; i++) {
				if (accArr[i].accId == tempId) {
					accArr[i].balance += tempBalance;
					cout << "�ԱݿϷ�" << endl;
					cout << endl;
					break;
				}
			}
			cout << "�������� �ʴ� ���� ID�Դϴ�" << endl;
			cout << endl;
			break;
		case 3:
			cout << "[��    ��]" << endl;
			cout << "����ID: ";
			cin >> tempId;
			cout << "��ݾ�: ";
			cin >> tempBalance;
			for (int i = 0; i < accNum; i++) {
				if (accArr[i].accId == tempId) {
					accArr[i].balance -= tempBalance;
					cout << "��ݿϷ�" << endl;
					cout << endl;
				}
			}
			cout << "�������� �ʴ� ���� ID�Դϴ�" << endl;
			cout << endl;
			break;
		case 4:
			for (int i = 0; i < accNum; i++) {
				cout << "����ID: " << accArr[i].accId << endl;
				cout << "�̸�: " << accArr[i].name << endl;
				cout << "�ܾ�: " << accArr[i].balance << endl;
				cout << endl;
			}
			cout << endl;
			break;
		case 5:
			cout << "���α׷��� �����մϴ�" << endl;
			return 0;
		default:
			cout << "�߸��� ��ȣ�Դϴ�" << endl;
			cout << endl;
			break;
		}
	}
}