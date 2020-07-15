#include<iostream>
#include<string>
using namespace std;
int main()
{
	int firstnum, lastnum, count, i, j;

	cout << "Enter the first number : ";
	cin >> firstnum;
	cout << "Enter the last number : ";
	cin >> lastnum;
	cout << endl;

	for (i = firstnum; i <= lastnum; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				count = count + 1;
		}
		if (count == 2)
			cout << i << " ";
	}
	cout << endl;
}