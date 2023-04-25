#include<iostream>
using namespace std;
//#define CALC_IF
#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");
#ifdef CALC_IF
	cout << "calc" << endl;
	double a, b;
	char s;
	cout << "введите простое арифметическое выражение:";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error:no operation " << endl;

	}
#endif CALC_IF

#ifdef CALC_SWITCH
	cout << "CALC_SWITCH" << endl;
	double a, b;
	char s;
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	switch(s)
	{
	case'+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	}
	switch (s)
	{
	case'-':
		cout << a << "-" << b << "=" << a - b << endl;
		break;}
	switch (s)
	{
	case'*':
		cout << a << "*" << b << "=" << a * b << endl;
		break;}
	switch (s)
	{
	case'/':
		cout << a << "/" << b << "=" << a / b << endl;
		break;
	default:cout << "error:no operation" << endl;

	}

	
	
	






	}
#endif CALC_SWITCH
