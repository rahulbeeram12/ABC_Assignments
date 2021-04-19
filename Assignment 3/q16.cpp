#include<iostream>
using namespace std;

int main() {
	float salary;
	cin >> salary;

	float bonus = 0;
	if (salary >= 15000) {
		bonus += 15000 * 0.1;
	} else if (salary < 15000 && salary >= 10000) {
		bonus += 15000 * 0.08;
	} else if (salary < 10000) {
		bonus += 0;
	}

	cout << "Salary is : " << salary << "\n";
	cout << "Bonus is : " << bonus << "\n";
	cout << "Net Salary is : " << salary + bonus << "\n";
	return 0;
}