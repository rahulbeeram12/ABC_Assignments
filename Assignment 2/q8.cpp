#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "Square of number is : " << n * n << "\n";
	cout << "Square root of number is : " << pow(n, 0.5) << "\n"; //O(logn)
}