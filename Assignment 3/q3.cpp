#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 1000 && n <= 9999) {
		if ((n & 1) == 1) cout << "4 Digit odd Integer" << "\n";
		else cout << "4 Digit even Integer" << "\n";
	} else {
		cout << "Not 4 digit Integer" << "\n";
	}
}