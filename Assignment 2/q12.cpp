#include<iostream>
using namespace std;

bool isValid(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
	       || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
	char ch;
	cin >> ch;
	if (isValid(ch)) cout << "Character is vowel" << "\n";
	else cout << "Character is not vowel" << "\n";
}