#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout << "Enter String : ";
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i] << endl;
	}
	system("pause");
	return 0;
}