#include<iostream>
using namespace std;
//#define PALINDROME
#define LUCKY_TICKET
void main()
{
#ifdef PALINDROME
	setlocale(LC_ALL, "Russian");
	int number;            // ����� �������� � ����������
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	int reverse = 0;
	while (buffer > 0)
	{
		reverse *= 10;       // 1)�������� ����� �� 1 ������
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;






#endif PALINDROME



	
#ifdef LUCKY_TICKET
		setlocale(LC_ALL, "Russian");
	


		



	

#endif LUCKY_TICKET
}