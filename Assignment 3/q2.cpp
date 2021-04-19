#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 100 && n <= 999) {
		if ((n & 1) == 1) cout << "3 Digit odd Integer" << "\n";
		else cout << "3 Digit even Integer" << "\n";
	} else {
		cout << "Not 3 digit Integer" << "\n";
	}
}