#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	float cv,s,p,R;
	cin >> a >> b >> c;
	cv = a+ b + c;
	p = cv/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	R = (a*b*c)/(4*s);
	cout << fixed;
	cout << setprecision(3) << R;
	
	return 0;
}
