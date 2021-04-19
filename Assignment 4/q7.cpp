#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int res = 0;
	int prd = 0;

	int last_num = n % 10;
	n = n / 10;
	res = res * prd + last_num;
	prd = 10;

	int second_last = n % 10;
	n = n / 10;
	res = res * prd + second_last;

	int third_last = n % 10;
	n = n / 10;
	res = res * prd + third_last;

	int first_num = n % 10;
	n = n / 10;
	res = res * prd + first_num;

	cout << res << "\n";
	return 0;
}