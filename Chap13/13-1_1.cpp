#include <iostream>
using namespace std;

template <typename T>
void SwapData(T& data1, T& data2) {
	T temp = data1;
	data1 = data2;
	data2 = temp;
}

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

int main() {
	Point pos1(1, 2);
	Point pos2(10, 20);
	SwapData(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	return 0;
}