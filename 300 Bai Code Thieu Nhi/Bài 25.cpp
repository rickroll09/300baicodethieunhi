#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n,i,sum=0;
	
	cin >> n;
	
	n = n/2;
	
	for(i=1; i<=n; i++) {
		sum = sum + 2*i;
	}
	
	cout << sum;
	
	return 0;
}
