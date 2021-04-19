#include<iostream>
using namespace std;
#define nline "\n"

int main() {
	int spaces = 4;
	int star = 1;
	for (int i = 0; i < 5 ; i++) {
		// spaces
		for (int j = 0; j < spaces; j++) {
			cout << " " ;
		}
		spaces--;

		//stars
		for (int j = 0; j < star ; j++) {
			cout << "* ";
		}
		star += 1;

		cout << nline;
	}
}