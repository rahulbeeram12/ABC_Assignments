#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (!(n & 1)) cout << "Number is even!" << "\n";
	else cout << "Number is odd!" << "\n";
}