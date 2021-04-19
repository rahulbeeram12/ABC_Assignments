#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int check = n / 100;
	if (check > 0) { // it is a 3 digit number
		if ((n & 1)) { // it is even
			cout << "Yes it is 3 digit odd number!" << "\n";
		} else { // it is odd
			cout << "It is 3 digit number but it is even number!" << "\n";
		}
	} else {
		cout << "It is not three digit number" << "\n";
	}

	return 0;
}