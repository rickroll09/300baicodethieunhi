#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,i,duong=0;
	int array[100];
	
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> array[i];
		if(array[i]>0) {
			duong++;
		}
	}
	cout << duong;
	
	return 0;
}
