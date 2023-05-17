#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int m,n,chiahet = 0,chan = 0,i;
	
    cin >> m >> n;
    
    for(i=m; i<=n; i++) {
    	if(i%3==0 || i%5==0) {
    		chiahet++;
		}
		if(i%2==0) {
			chan += i;
		}
	}
	
	cout << chiahet << " " << chan;
    
    return 0;
}
