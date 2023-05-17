#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n, tongtien;
	
	cin >> n;
	
	if(n<50) {
		tongtien = n*600;
	} else if(n<100) {
		tongtien = 50*600 + (n-50)*800;
	} else if(n<200) {
		tongtien = 50*600 + 50*800 + (n-100)*1100;
	} else {
		tongtien = 50*600 + 50*800 + 100*1100 + (n-200)*1500;
	}
	
	cout << tongtien;

	return 0;
}
