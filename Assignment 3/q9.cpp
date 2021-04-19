#include<iostream>
using namespace std;

bool isVowel(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
	       || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
	char ch;
	cin >> ch;
	if (isVowel(ch)) {
		if (ch >= 65 && ch <= 90) cout << "Character is Uppercase vowel" << "\n";
		else cout << "Character is Lowercase vowel" << "\n";
	} else {
		cout << "Character is not vowel" << "\n";
	}
	return 0;
}