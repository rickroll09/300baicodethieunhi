#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,i,tong=0,soluong=0;
	int array[100];
	
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> array[i];
		if(array[i]%2==0) {
			tong += array[i];
			soluong++;
		}
	}
	
	if(soluong==0) {
		cout << "-";
		return 0;
	}
	
	cout << tong;
	
	return 0;
}
