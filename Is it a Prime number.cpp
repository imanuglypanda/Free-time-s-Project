#include<iostream>
using namespace std;
int main() {
	int i, num, count = 0;

	cout << "Enter number : ";
	cin >> num;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			count++;
		}

	}
	cout << endl;
	if (count == 0) {
		cout << num << " Is Prime number" << endl;

	}
	else {
		cout << num << " Is not Prime number" << endl;
	}

	return 0;
}