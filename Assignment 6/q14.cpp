#include<iostream>
using namespace std;
#define nline "\n"

int main() {
	for (int i = 0; i < 5; i++) {
		char ch = 'A';
		for (int j = 0; j <= i; j++) {
			cout << ch << " ";
			ch++;
		}
		cout << nline;
	}
	return 0;
}