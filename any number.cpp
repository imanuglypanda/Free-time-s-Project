#include<iostream>
using namespace std;
int main()
{
	int num = 0, divided, result_output, result_the_rest;
	
	while (num >= 0){
		num = 0, divided = 10;
		cout << "Enter Number : ";
		cin >> num;
		while (divided <= num) { //finding a lenght of the input number

			divided *= 10; //times again and again to get the divide number
		}
		for (divided /= 10; divided > 0; divided /= 10) { //repeat divide print the result and finding the rest

			result_output = num / divided; //get the 1st digit of the input number
			cout << result_output << endl; //print the result
			result_the_rest = num % divided; //get the rest of the number after the 1st digit
			num = result_the_rest; //replace the input number with the rest number
		}
		cout << endl;
	}
	cout << "Encounter Negative Number, Program shoting down. . ." << endl;
	return 0;
}