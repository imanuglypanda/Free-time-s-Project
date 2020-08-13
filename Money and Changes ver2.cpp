#include <iostream>
using namespace std;
int main()
{
	float money_rest = 0, price = 0, total, satang_check; //Variable satang_check use to check if the value is ok to calculate in the calculation.
	int money, m1000, m500, m100, m50, m20, m10, m5, m1, lil_m50, lil_m25; //lil = little

	while (money_rest >= 0 || money_rest <= 0) {
		cout << "Enter Price : ";
		cin >> price;
		cout << "Enter money : ";
		cin >> money_rest;
		system("cls"); //just clear screen

		//These if else part are for stopping a user to not input a invalid value, then go back to do it again.
		if (price < 0 && money_rest < 0) {
			cout << "Value can't be negative, Try again" << endl << endl;
		}

		else if (price < 0) {
			cout << "Price can't be negative value, Try again" << endl << endl;
		}
		
		else if (money_rest < price && money_rest < 0) {
			cout << "Money can't be negative value and it's not enough to pay the price, Try again" << endl << endl;
		}

		else if (money_rest < price) {
			cout << "not enough money, Try again" << endl << endl;
		}

		else if (money_rest == price && money_rest > 0 && price > 0) {
			cout << "The Price and money is even, No change" << endl << endl;
		}

		else if (money_rest == 0 && price == 0) {
			cout << "Both value are zero, no process in changing." << endl << endl;
		}

		else if (price == 0) {
			cout << "Price is free, no need to pay" << endl << endl;
		}

		money = money_rest - price;
		money_rest = money_rest - price;   
		money_rest = money_rest - money; //money_rest keeps the 0.25, 0.50 or 0.75 to calculate in others calculation.
		satang_check = money_rest;

		//satang_check check the value
		if (satang_check == 0 || satang_check == 0.25 || satang_check == 0.5 || satang_check == 0.75);
		else cout << "only 0.25, 0.50 and 0.75 are allow." << endl << endl;

		while (satang_check == 0 || satang_check == 0.25 || satang_check == 0.50 || satang_check == 0.75) {
			m1000 = money / 1000;
			money = money % 1000;

			m500 = money / 500;
			money = money % 500;

			m100 = money / 100;
			money = money % 100;

			m50 = money / 50;
			money = money % 50;

			m20 = money / 20;
			money = money % 20;

			m10 = money / 10;
			money = money % 10;

			m5 = money / 5;
			money = money % 5;

			m1 = money / 1;
			money = money % 1;

			money_rest = money_rest * 100; //Use to calculate for getting the counting value.
			money = (int)money_rest; //change the value type to calculate with mod(%).

			lil_m50 = money / 50;
			money = money % 50;

			lil_m25 = money / 25;
			money = money % 25;

			satang_check = 1; //to get out of this loop or end this loop.

			total = (m1000 * 1000) + (m500 * 500) + (m100 * 100) + (m50 * 50) + (m20 * 20) + (m10 * 10) + (m5 * 5) + (m1 * 1) + (lil_m50 * 0.5) + (lil_m25 * 0.25);

			cout << "Price = " << price << endl;
			cout << "Money = " << total + price << endl << endl; //total is the sum of money changes, so you need to add price to get the original money
			cout << "B1000 = " << m1000 << endl;
			cout << "B500 = " << m500 << endl;
			cout << "B100 = " << m100 << endl;
			cout << "B50 = " << m50 << endl;
			cout << "B20 = " << m20 << endl;
			cout << "B10 = " << m10 << endl;
			cout << "B5 = " << m5 << endl;
			cout << "B1 = " << m1 << endl;
			cout << "50_tang = " << lil_m50 << endl;
			cout << "25_tang = " << lil_m25 << endl << endl;
			cout << "Total change = " << total << endl << endl;
		}
	}
	return 0;
}
