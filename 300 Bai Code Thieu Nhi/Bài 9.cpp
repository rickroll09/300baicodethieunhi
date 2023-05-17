#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	float t, v, a, dtb;
	
	cin >> t >> v >> a;
	dtb = (t*2+v*2+a)/5;
	cout << fixed;
	cout << setprecision(1) << dtb;
	
	return 0;
}
