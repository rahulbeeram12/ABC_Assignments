#include<iostream>
using namespace std;

bool isThreeDigitNumber(int num) {
	return num >= 100 && num <= 999 ? true : false;
}

int main() {
	int arr[5];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (isThreeDigitNumber(arr[i])) {
			count++;
		}
	}

	cout << "Number of three digit numbers " << count << endl;
	return 0;
}