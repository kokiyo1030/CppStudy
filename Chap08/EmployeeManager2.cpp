#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Employee {
private:
	char name[100];
public:
	Employee(const char* name) {
		strcpy(this->name, name);
	}
	void ShowYourName() const{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee {
private:
	int salary;
public:
	PermanentWorker(const char* name, int salary) : Employee(name), salary(salary) {}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const{
		ShowYourName();
		cout << "salary: " << salary << endl;
	}
};

class EmployeeHandler {
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		/*for (int i = 0; i < empNum; i++) {
			empList[i]->ShowSalaryInfo();
		}*/
	}
	void ShowTotalSalary() const {
		int sum = 0;
		/*for (int i = 0; i < empNum; i++) {
			sum += empList[i]->GetPay();
		}*/
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};

int main() {
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("Kim", 1000));
	handler.AddEmployee(new PermanentWorker("Lee", 1500));
	handler.AddEmployee(new PermanentWorker("Jong", 2000));

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �ݿ��� ����
	handler.ShowTotalSalary();
	return 0;
}