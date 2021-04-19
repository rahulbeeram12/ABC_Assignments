#include<iostream>
using namespace std;

bool isThreeDigitNumber(int num) {
	return num >= 100 && num <= 999 ? true : false;
}

int main() {
	int arr[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		if (isThreeDigitNumber(arr[i]) && (arr[i] & 1)) {
			count++;
		}
	}

	cout << "Number of three digit odd numbers " << count << endl;
	return 0;
}