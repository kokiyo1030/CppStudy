#include <iostream>
using namespace std;

class Base {
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	Base() : num1(1), num2(2), num3(3) {}
};

class Derived : protected Base {};

int main() {
	Derived drv;
	//cout << drv.num3 << endl; // protected로 상속했으니 public에서 protected가 됨 따라서 외부에서 호출 불가능
	return 0;
}