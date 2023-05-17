#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int m,n,chiahet = 0,i;
	
    cin >> m >> n;
    
    for(i=m; i<=n; i++) {
    	if(i%3==0) {
    		chiahet++;
		}
	}
	
	cout << chiahet;
    
    return 0;
}
