#include <iostream>
#include <iomanip>
using namespace std;

double kineticEnergy(double m, double v);

int main() {
	double m; // the object's mass in kilograms
	double v; // the object's velocity in meters per second.

	cout << "Enter the mass of the object (in kilograms): ";
	cin >> m;
	cout << "Enter the object's velocity (in meters per second): ";
	cin >> v;
	double energy = kineticEnergy(m,v);
	cout << fixed << setprecision(2);
	cout << "The kinetic energy produced is: " << energy << " joules" << endl;
	return 0;
}

double kineticEnergy(double m, double v) {
	return 0.5 * m * pow(v, 2);
}
