#include<iostream>

using namespace std;

//#define WHILE_1
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;//счетчик цикла
	int n;    //количество итераций
	cout << "введите количество итераций: "; cin >> n;
	while (i<n)
	{
		cout << i << "loops" << endl;
		i++;
	}
#endif  WHILE_1

}