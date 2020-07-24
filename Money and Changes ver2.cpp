#include <iostream>
using namespace std;
int main()
{
	int money = 1, price = 1;
	int total, m1000, m500, m100, m50, m20, m10, m5, m1;
	while (money / price >= 0 || money / price <= 0) {
		cout << "Enter Price : ";
		cin >> price;
		cout << "Enter money : ";
		cin >> money;
		system("cls");
		if (price < 0 && money < 0) {
			cout << "Value can't be negative, Try again" << endl << endl;
		}
		else if (price < 0) {
			cout << "Price can't be negative value, Try again" << endl << endl;
		}
		else if (money < price && money < 0) {
			cout << "Money can't be negative value and it's not enough to pay the price, Try again" << endl << endl;
		}
		else if (money < price) {
			cout << "not enough money, Try again" << endl << endl;
		}
		else if (money == 0) {
			cout << "The Price and money is even, No change" << endl << endl;
		}
		money = money - price;
		while (money >= 0 && price >= 0) {
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

			total = m1000 * 1000 + m500 * 500 + m100 * 100 + m50 * 50 + m20 * 20 + m10 * 10 + m5 * 5 + m1 * 1;

			cout << "Price = " << price << endl;
			cout << "Money = " << total + price << endl << endl;
			cout << "B1000 = " << m1000 << endl;
			cout << "B500 = " << m500 << endl;
			cout << "B100 = " << m100 << endl;
			cout << "B50 = " << m50 << endl;
			cout << "B20 = " << m20 << endl;
			cout << "B10 = " << m10 << endl;
			cout << "B5 = " << m5 << endl;
			cout << "B1 = " << m1 << endl << endl;
			cout << "Total change = " << total << endl << endl;
			money--;
		}
		money++;
	}

	return 0;
}