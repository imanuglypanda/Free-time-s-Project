#include<iostream>
using namespace std;
int main()
{
	int num, result = 1, power, count = 1;
	cout << "Enter Number : ";
	cin >> num;
	cout << "How much power? : ";
	cin >> power;
	while (count <= power) {
		result *= num;
		count++;
	}
	cout << "The Number " << num << " and the Power of " << power << " is equal to " << result << endl;
	return 0;
}