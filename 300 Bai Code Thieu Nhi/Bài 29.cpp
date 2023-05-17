#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n,i;
	int count = 0;
	
    cin >> n;
    if(n < 2){
        cout << "No";
        return 0;
    }

    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    
    if(count == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    return 0;
}
