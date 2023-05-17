#include <iostream>
using namespace std;

int main() {
	int tuoi;
	
	cin >> tuoi;
	if (0<tuoi<=150) {
		if (0< tuoi && tuoi <= 11) {
			cout << "Thieu nhi";
		}
		else if (11< tuoi && tuoi <= 25) {
			cout << "Thieu nien";
		}
		else if (25< tuoi && tuoi <= 50) {
			cout << "Trung nien";
		}
		else {
			cout << "Lao nien";
		}
	}
	
	
	return 0;
}
