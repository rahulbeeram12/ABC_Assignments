#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	char ch;
	cin >> ch;

	switch (ch) {
	case '+' : cout << "Addition : " << n1 + n2 << "\n";
		break;
	case '*' : cout << "Multiplication : " << n1 * n2 << "\n";
		break;
	case '/' : cout << "Division : " << (float)n1 / n2 << "\n";
		break;
	case '-' : cout << "Substraction : " << n1 - n2 << "\n";
		break;
	case '%' : cout << "Remainder : " << n1 % n2 << "\n";
		break;

	default : cout << "Operator is invalid " << endl;
	}
	return 9;
}