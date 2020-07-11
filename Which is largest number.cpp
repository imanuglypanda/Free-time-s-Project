#include<iostream>
using namespace std;
int main()
{
	int count, value, highest_value = 0;
	cout << "How many value? : ";
	cin >> count;
	for (int start = 1; start <= count; start++) {
		cout << "Enter Value " << start << " : ";
		cin >> value;
		if (value > highest_value) highest_value = value;
		else continue;
	}
	cout << "The Largest number of all the value is " << highest_value << endl;
	return 0;
}