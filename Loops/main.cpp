#include<iostream>

using namespace std;

//#define WHILE_1
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;//������� �����
	int n;    //���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i<n)
	{
		cout << i << "loops" << endl;
		i++;
	}
#endif  WHILE_1

}