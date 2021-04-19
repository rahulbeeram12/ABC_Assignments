#include<iostream>
using namespace std;
#define nline "\n"

int main() {
	for (int i = 5; i >= 1; i--) {
		int counter = 1;
		for (int j = 1; j <= i; j++) {
			cout << counter << " ";
			counter++;
		}
		cout << nline;
	}
	return 0;
}