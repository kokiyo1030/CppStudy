#include <iostream>
#include <cstring>
#pragma warning (disable : 4996)
using namespace std;

class Gun {
private:
	int bullet;
public:
	Gun(int num) : bullet(num) {}
	void Shot() {
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police : public Gun {
private:
	int handcuffs;
public:
	Police(int num, int cuff) : Gun(num), handcuffs(cuff) {}
	void PutHandcuff() {
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main() {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	return 0;
}