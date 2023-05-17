#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,i,tong=0;
	int array[100];
	
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> array[i];
		tong += array[i];
	}
	cout << tong;
	
	return 0;
}
