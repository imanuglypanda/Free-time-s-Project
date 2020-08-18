#include<iostream>
#include<string>
using namespace std;

void input(string& , float&, float&);
void cal_BMI(float, float, float&);
void check_BMI(float);
void output(string, float, float);


int main()
{
	int stu;
	float weight = 0, height = 0;
	string name;

	cout << "Enter number of person : ";
	cin >> stu;

	for(int i = 1; i <= stu; i++){
		input(name, weight, height);
		output(name, weight, height);
	}

	return 0;
}

void input(string &name, float &weight, float &height){
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter weight : ";
	cin >> weight;
	cout << "Enter height : ";
	cin >> height;
}

float cal_BMI(float weight, float height){
	float BMI;
	height = height / 100;
	height *= height;
	BMI = weight / height;
	return BMI;
}

void check_BMI(float BMI){
	if (BMI < 16) cout << "Severe Thinness" << endl;
	else if (BMI <= 17) cout << "Moderate Thinness" << endl;
	else if (BMI <= 25) cout << "Normal" << endl;
	else cout << "Fat" << endl;
}

void output(string name, float weight, float height){
	float BMI;
	cout << "Name : " << name << endl;
	cout << "weight : " << weight << endl;
	cout << "Height : " << height << endl;
	BMI = cal_BMI(weight, height);
	cout << "BMI : " << BMI << endl;
	cout << "Status : ";
	check_BMI(BMI);
	cout << endl << endl;
}