#include <iostream>
using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car(int gas) : gasolineGauge(gas) {}
	int GetGasGauge() const {
		return gasolineGauge;
	}
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) {}
	int GetElecGauge() const {
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {}
	void ShowCurrentGauge() const {
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

int main() {
	HybridWaterCar watercar(30, 64, 65);
	watercar.ShowCurrentGauge();
}