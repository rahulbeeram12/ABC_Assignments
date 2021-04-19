#include<iostream>
using namespace std;

int main() {
	int arr[5];
	int positive_count = 0;
	int negative_count = 0;
	int zeros_count = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] < 0) negative_count++;
		else if (arr[i] > 0) positive_count++;
		else zeros_count++;
	}

	cout << "Number of positive numbers : " << positive_count << endl;
	cout << "Number of negative numbers : " << negative_count << endl;
	cout << "Number of zeros numbers : " << zeros_count << endl;
	return 0;
}