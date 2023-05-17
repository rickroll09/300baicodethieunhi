#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n,i;
	
	cin >> n;
	
	n = n/3;
	if(n>0) {
		for(i=1; i<=n; i++) {
			cout << 3*i;
			if(i!=n) {
				cout << " ";
			} 
		}
	} else {
		cout << "-";
	}
	
	return 0;
}
