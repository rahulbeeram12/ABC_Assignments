#include<iostream>
using namespace std;
#define nline endl

int main() {
	for (int i = 0 ; i < 5; i++) {
		for (int j = 0 ; j < 3; j++) {
			cout << "* ";
		}
		cout << nline;
	}
	return 0;
}