#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if ((n & 1) == 1) return cout << "Odd Number" , 0;
	else return cout << "Even Number" , 0;
}