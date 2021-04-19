#include<iostream>
using namespace std;
#define nline endl

int main() {
	char ch = 'A';
	for (int i = 0 ; i < 5; i++) {
		for (int j = 0 ; j < 5; j++) {
			cout << ch << " ";
		}
		ch++;
		cout << nline;
	}
	return 0;
}