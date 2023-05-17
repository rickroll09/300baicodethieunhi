#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n,i,uoc=0;
	
	cin >> n;
	
	for(i=1; i<=n; i++) {
		if(n%i==0) {
			uoc++;
		}
	}
	
	cout << uoc;
	
	return 0;
}
