#include<iostream>
using namespace std;
int main()
{
	char grade = '!';
	int count = -1;
	float total = 0;
	while (grade != '.') {
		count++;
		cout << "Enter the letter Grade (Enter 'X' to exit)" << endl;
		cin >> grade;
		if (grade == 'a' || grade == 'A') total += 4;
		else if (grade == 'b' || grade == 'B') total += 3;
		else if (grade == 'c' || grade == 'C') total += 2;
		else if (grade == 'd' || grade == 'D') total++;
		else if (grade == 'f' || grade == 'F') total += 0;
		else if (grade == 'x' || grade == 'X') break;
		else cout << "Wrong Grade input, Try again." << endl;
	}
	cout << "Total Grade Points : " << total << endl;
	total = total / count;
	cout << "GPA : " << total << endl;
	return 0;
}