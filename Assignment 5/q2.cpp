#include<iostream>
using namespace std;

int main() {
	int start, end;
	cin >> start >> end;

	for (int i = start ; i <= end ; i++) if (!(i & 1)) cout << i << "\n";
	return 0;
}