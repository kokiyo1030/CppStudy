#include <iostream>
using namespace std;

class Calcuator {
private:
	int addCnt;
	int minusCnt;
	int multiCnt;
	int divideCnt;

public:
	void Init() {
		addCnt = 0;
		minusCnt = 0;
		multiCnt = 0;
		divideCnt = 0;
	}
	float Add(float num1, float num2) {
		addCnt++;
		return num1 + num2;
	}
	float Min(float num1, float num2) {
		minusCnt++;
		return num1 - num2;
	}
	float Mul(float num1, float num2) {
		multiCnt++;
		return num1 * num2;
	}
	float Div(float num1, float num2) {
		divideCnt++;
		return num1 / num2;
	}
	void ShowOpCount() {
		cout << "µ¡¼À: " << addCnt << " »¬¼À: " << minusCnt << " °ö¼À: " << multiCnt << " ³ª´°¼À: " << divideCnt << endl;
	}
};

int main() {
	Calcuator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.2 - 2.4 = " << cal.Min(3.2, 2.4) << endl;
	cout << "3.2 - 1.4 = " << cal.Min(3.2, 1.4) << endl;
	cout << "3.2 * 2.4 = " << cal.Mul(3.2, 2.4) << endl;
	cout << "3.2 / 2.4 = " << cal.Div(3.2, 2.4) << endl;
	cal.ShowOpCount();
	return 0;
}