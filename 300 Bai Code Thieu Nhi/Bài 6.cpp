#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int a, b, c;
	float cv, p, s;
	
	cin >> a >> b >> c;
	cv=a+b+c;
	p=cv/2;
	s = (float)(sqrt(p*(p-a)*(p-b)*(p-c)));
	cout << fixed;
	cout << setprecision(1);
	cout << cv << " ";
	cout << setprecision(3);
	cout << s;
	
	return 0;
}
