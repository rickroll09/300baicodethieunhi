#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int m,n,sum = 0,i;
	
    cin >> m >> n;
    
    for(i=m; i<=n; i++) {
    	sum += i;
	}
	
	cout << sum;
    
    return 0;
}
