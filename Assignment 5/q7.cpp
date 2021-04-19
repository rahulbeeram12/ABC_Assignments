#include<iostream>
using namespace std;

int main() {
	int arr[5];
	int odd_sum = 0;
	int even_count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if ((arr[i] & 1)) odd_sum += arr[i];
		else even_count++;
	}

	cout << "Even Count : " << even_count << endl;
	cout << "Sum of odd integers : " << odd_sum << endl;
	return 0;
}
