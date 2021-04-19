#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	//another approach using ternary operator
	// min = c < (a < b ? a : b) ? c : (a < b ? a : b);

	cout << min << "\n";
	return 0;
}