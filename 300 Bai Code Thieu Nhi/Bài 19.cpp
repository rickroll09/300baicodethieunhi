#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int x,sum = 0;
	
	cin >> x;
	
	while(x!=0) {
		sum += x%10;
		x=x/10;
	}
	
	sum = sum%10;
	
	if(sum==9) {
		cout << sum << endl << "may man";
	} else {
		cout << sum << endl << "chua may man";
	}
	return 0;
}
