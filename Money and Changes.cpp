#include<iostream>
using namespace std;
int main()
{
	int money, price = 0;
	while (price >= 0) {
		int m1000 = 0, m500 = 0, m100 = 0, m50 = 0, m20 = 0, m10 = 0, m5 = 0, m1 = 0, total;
		cout << "Enter Price : ";
		cin >> price;
		if (price < 0) break;
		cout << "Enter Money : ";
		cin >> money;
		if (money < price) {
			system("cls");
			cout << "Not Enough money, try again." << endl;
			cout << endl;
			continue;
		}
		money = money - price;
		system("cls");
		while (money > 0) {
			if (money >= 1000) {
				m1000++;
				money = money - 1000;
			}
			else if (money >= 500) {
				m500++;
				money = money - 500;
			}
			else if (money >= 100) {
				m100++;
				money = money - 100;
			}
			else if (money >= 50) {
				m50++;
				money = money - 50;
			}
			else if (money >= 20) {
				m20++;
				money = money - 20;
			}
			else if (money >= 10) {
				m10++;
				money = money - 10;
			}
			else if (money >= 5) {
				m5++;
				money = money - 5;
			}
			else if (money >= 1) {
				m1++;
				money = money - 1;
			}
			else continue;
		}
		total = 1000 * m1000 + 500 * m500 + 100 * m100 + 50 * m50 + 20 * m20 + 10 * m10 + 5 * m5 + 1 * m1;
		cout << "Price = " << price << endl;
		cout << "Money = " << total + price << endl;
		cout << "Total Exchange = " << total << endl << endl;
		cout << "1000 = " << m1000 << endl;
		cout << "500 = " << m500 << endl;
		cout << "100 = " << m100 << endl;
		cout << "50 = " << m50 << endl;
		cout << "20 = " << m20 << endl;
		cout << "10 = " << m10 << endl;
		cout << "5 = " << m5 << endl;
		cout << "1 = " << m1 << endl << endl;
		
	}
	cout << "Error. . . Program Ended" << endl;
	return 0;
}