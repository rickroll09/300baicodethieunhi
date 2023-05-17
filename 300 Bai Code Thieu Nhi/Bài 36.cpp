#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int m,n,i,ucln;
	
	cin >> m >> n;
	
	for (i=1; i<=m; i++) {
		if(m%i==0 && n%i==0) {
			ucln = i;
		}
	}
	
	cout << ucln;
	
	return 0;
}
