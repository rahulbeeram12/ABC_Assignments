#include<iostream>
using namespace std;

int maxi(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int arr[5];
	int res = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		res = maxi(arr[i], res);
	}

	cout << res << "\n";
	return 0;
}
