#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,i,cantim;
	int array[100];
	
	cin >> n >> cantim;
	
	for(i=0; i<n; i++) {
		cin >> array[i];
		if(array[i]==cantim) {
			cout << "Yes" << endl << i;
			return 0;
		}
	}
	
	cout << "No";
	
	return 0;
}
