#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "cube of number is : " << n * n * n << "\n";
	cout << "cube root of number is : " << pow(n, 0.33333) << "\n"; //O(logn)
}