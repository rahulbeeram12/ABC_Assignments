#include<iostream>
using namespace std;
#define nline endl

int main() {
	int counter = 1;
	for (int i = 0 ; i < 5; i++) {
		for (int j = 0 ; j <= i; j++) {
			cout << counter << " ";
		}
		counter++;
		cout << nline;
	}
	return 0;
}