#include<iostream>
using namespace std;
#define nline "\n"

int main() {
	for (int i = 5; i >= 1; i--) {
		char ch = 'A';
		for (int j = 1; j <= i; j++) {
			cout << ch << " ";
			ch++;
		}
		cout << nline;
	}
	return 0;
}