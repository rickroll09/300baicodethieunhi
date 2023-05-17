#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int r;
	float cv, dt;
	cin >> r;
	cv = r*2*3.14;
	dt = r*r*3.14;
	cout << fixed;
	cout << setprecision(2);
	cout << cv << " " << dt;
	return 0;
}
