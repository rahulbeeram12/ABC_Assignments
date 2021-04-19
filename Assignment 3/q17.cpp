#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 1000 && n <= 9999) {
		int even_count = 0;
		while (n > 0) {
			int r = n % 10;
			if ((r & 1) == 0) even_count++;
			n = n / 10;
		}
		cout << "Count of even digits is : " << even_count << "\n" ;
	} else {
		cout << "Does not satisfy the condition" << "\n";
	}

	return 0;
}