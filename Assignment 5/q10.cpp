#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	int n;
	cin >> n;

	while (n > 0) {
		int remainder = n % 10;
		sum += remainder;
		n = n / 10;
	}

	cout << "Sum of numbers is : " << sum << endl;
	return 0;
}