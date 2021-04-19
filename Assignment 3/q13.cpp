#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	//finding max
	int max = a; //assuming
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "Maximum Number is : " << max << "\n";

	//finding min
	int min = a; //assuming
	if (b < min) min = b;
	if (c < min) min = c;

	cout << "Minimum Number is : " << min << "\n";

	// finding middle number

	// now middle number would be the one which is not max nor min;
	// -> 3 possibilities

	if (min == a && max == b) cout << "Middle number is " << c << "\n";
	else if (min == b && max == a) cout << "Middle number is " << c << "\n";

	if (min == b && max == c) cout << "Middle number is " << a << "\n";
	else if (min == c && max == b) cout << "Middle number is " << a << "\n";

	if (min == a && max == c) cout << "Middle number is " << b << "\n";
	else if (min == c && max == a) cout << "Middle number is " << b << "\n";

	return 0;
}