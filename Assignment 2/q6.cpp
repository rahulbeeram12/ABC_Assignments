#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;

	//another approach using ternary operator
	//int max = c > (a > b ? a : b) ? c : (a > b ? a : b);

	cout << max << "\n";
	return 0;
}