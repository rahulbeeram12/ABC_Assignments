#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	float number_of_digits = 0;
	float sum = 0;

	while (n > 0) {
		float rem = n % 10;
		n = n / 10;
		number_of_digits++;
		sum += rem;
	}

	/*cout << sum << endl;
	cout << number_of_digits << endl;*/

	cout << "Average of number is : " << (float)(sum / number_of_digits) << "\n";
	return 0;
}