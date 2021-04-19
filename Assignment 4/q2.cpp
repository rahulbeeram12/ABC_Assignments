#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	switch (number) {
	case 1 : cout << "Today is Monday " << "\n";
		break;
	case 2 : cout << "Today is Tuesday " << "\n";
		break;
	case 3 : cout << "Today is Wednesday " << "\n";
		break;
	case 4 : cout << "Today is Thrusday " << "\n";
		break;
	case 5 : cout << "Today is Friday " << "\n";
		break;
	case 6 : cout << "Today is Saturday " << "\n";
		break;
	case 7 : cout << "Today is Sunday " << "\n";
		break;

	default : cout << "Entered number is not valid " << endl;
	}

	return 8;
}