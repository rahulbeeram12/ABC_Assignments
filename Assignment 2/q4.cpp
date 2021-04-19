#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 4 == 0) {
		cout << "It is divisible by 4" << "\n";
	}
	if (n % 5 == 0) {
		cout << "It is divisible by 5" << "\n";
	}
	if (n % 6 == 0) {
		cout << "It is divisible by 6" << "\n";
	}
	if (n % 4 == 0 && n % 5 == 0 && n % 6 == 0) {
		cout << "It is divisible by 4 and 5 and 6" << "\n";
	}
	return 0;
}