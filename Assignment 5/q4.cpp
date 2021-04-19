#include<iostream>
using namespace std;

int main() {
	for (int i = 20 ; i >= 1 ; i--) if (!(i & 1)) cout << i << endl;
	return 0;
}