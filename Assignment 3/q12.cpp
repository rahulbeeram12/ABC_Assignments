#include<iostream>
using namespace std;

int main() {
	int a, b;
	char ch;
	cin >> a >> b;
	cin >> ch;
	if (ch == '+') cout << (a + b) << "\n";
	else if (ch == '*') cout << (a * b) << "\n";
	else if (ch == '-') cout << (a - b) << "\n";
	else if (ch == '/') cout << (a / b) << "\n";
	else cout << (a % b) << "\n";

	return 0;
}