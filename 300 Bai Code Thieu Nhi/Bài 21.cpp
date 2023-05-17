#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n, tongtien;
	
	cin >> n;
	
	if(n==1) {
		tongtien = 12000;
	}
	if(n>=2) {
		tongtien = 12000 + (n-1)*10000;
	}
	if(n>=31) {
		tongtien = 12000 + 29*10000 + (n-30)*9000;
	}
	
	cout << tongtien;

	return 0;
}
