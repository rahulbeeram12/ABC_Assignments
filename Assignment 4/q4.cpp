#include<iostream>
using namespace std;

int main() {
	int n1, n2, temp;
	cin >> n1 >> n2;

	cout << "Before swapping " << n1 << " " << n2 << "\n";

	temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "After swapping " << n1 << " " << n2 << "\n";
}