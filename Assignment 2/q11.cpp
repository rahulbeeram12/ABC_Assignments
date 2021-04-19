#include<iostream>
using namespace std;

//65 + (0 to 25) 25 = 90
int main() {
	char ch;
	cin >> ch;
	if (ch >= 97 && ch <= 122) cout << "Alphabet is lowercase!" << "\n";
	else cout << "Alphabet is not lowercase!" << "\n";
}