#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	
	
		a = _getch();
		switch (a)
		{
		    case 32:cout << "������" << endl;break;						
		    case 97:cout << "����" << endl;break; 			
		    case 115:cout << "�����" << endl;break; 			
		    case 100:cout << "�����" << endl;break; 
		    case 119:cout << "����" << endl;break;
		    case 13:cout << "�����" << endl;break;
			case 27:cout << "�����" << endl;break;  
		}
		main();





}