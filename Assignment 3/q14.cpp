#include<iostream>
using namespace std;

int main() {
	float eng, hindi, math, sci;
	//cout << "Enter Marks : " << "\n";
	cin >> eng >> hindi >> math >> sci;

	float total_marks = eng + hindi + math + sci;

	float percentage = (total_marks / 400) * 100;

	cout << "Percentage is : " << percentage << "\n";

	if (percentage >= 60) cout << "1st Division" << "\n";
	else if (percentage >= 50 && percentage < 60) cout << "2nd Division" << "\n";
	else if (percentage >= 40 && percentage < 50) cout << "3rd Division" << "\n";
	else if (percentage < 40) cout << "Re appear" << "\n";

	return 0;
}