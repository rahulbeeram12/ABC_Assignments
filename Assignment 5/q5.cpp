#include<iostream>
using namespace std;

int main() {
	int arr[5];
	int res = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		res += arr[i];
	}

	cout << res << "\n";
	return 0;
}
