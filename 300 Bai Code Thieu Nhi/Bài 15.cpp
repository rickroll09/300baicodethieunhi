#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int a, b, c;
	float cv, p, s;
	
	cin >> a >> b >> c;
	
	if(a+b>c && a+c>b && b+c>a) {
		cout << "Day la 3 canh cua mot tam giac" << endl;
		cv=a+b+c;
		p=cv/2;
		s = (float)(sqrt(p*(p-a)*(p-b)*(p-c)));
		cout << fixed;
		cout << setprecision(2);
		cout << cv << " ";
		cout << setprecision(1);
		cout << s;
	}
	else {
		cout << "Day khong phai la 3 canh cua mot tam giac";
	}
	
	
	return 0;
}
