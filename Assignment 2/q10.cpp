#include<iostream>
using namespace std;

//65 + (0 to 25) 25 = 90
int main() {
	char ch;
	cin >> ch;
	if (ch >= 65 && ch <= 90) cout << "Alphabet is uppercase!" << "\n";
	else cout << "Alphabet is not uppercase!" << "\n";
}