#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 4 == 0) {
		cout << "Completely divisible by 4" << "\n";
	}
	if (n % 5 == 0) {
		cout << "Completely divisible by 5" << "\n";
	}
	if (n % 6 == 0) {
		cout << "Completely divisible by 6" << "\n";
	}
}