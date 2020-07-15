#include<iostream>
using namespace std;
int main()
{
	int num;
	float count, count2;
	cout << "Enter Number : ";
	cin >> num;
	for (count = 0; count * count < num; count++) {

	}
	count2 = num / count;
	count = (count + count2) / 2;
	while (count * count > num) {
		count2 = num / count;
		count = (count + count2) / 2;
	}
	cout << "The Square root of " << num << " is " << count << endl;
	return 0;
}