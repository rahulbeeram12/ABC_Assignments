#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 100 && n <= 999) {
		int sum = 0;
		while (n > 0) {
			int r = n % 10;
			sum += r;
			n = n / 10;
		}

		cout << sum << "\n";
	} else {
		cout << n << "\n";
	}
}