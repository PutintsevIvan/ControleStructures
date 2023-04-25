#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number;	cout << "¬ведите число: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
}
