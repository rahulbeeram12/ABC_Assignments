#include<iostream>
using namespace std;
#define nline "\n"

int main() {
	char ch = 'E';
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << ch << " ";
		}
		ch--;
		cout << nline;
	}
	return 0;
}