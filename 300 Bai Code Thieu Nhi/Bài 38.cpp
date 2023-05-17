#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int squareRoot = (int) sqrt(n);
    int j;
    for (j = 2; j <= squareRoot; j++) {
        if (n % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	int k,i=1,dai=0;
	
	cin >> k;
	
	while(dai!=k) {
		if(isPrimeNumber(i)) {
			cout << i;
			if(dai!=k) {
				cout << " ";
			}
			dai++;
		}
		i++;
	}
	
	return 0;
}
