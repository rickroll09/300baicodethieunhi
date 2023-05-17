#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n, i=0;
	
	cin >> n;
	
	while(i*i <= n){
		if(i*i == n){
		cout << "Yes";
		return 0;
		}
		++i;
	}
	
	cout << "No";
	
    return 0;
}
