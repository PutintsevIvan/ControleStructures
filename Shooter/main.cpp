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
		    case 32:cout << "прыжок" << endl;break;						
		    case 97:cout << "лево" << endl;break; 			
		    case 115:cout << "назад" << endl;break; 			
		    case 100:cout << "право" << endl;break; 
		    case 119:cout << "верх" << endl;break;
		    case 13:cout << "огонь" << endl;break;
			case 27:cout << "выход" << endl;break;  
		}
		main();





}