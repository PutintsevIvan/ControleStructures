#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FOR
//#define FAKTORIAL
//#define STEPENI
//#define ASCII
//#define MULTIPLICATION_TABLE
//#define FIBONACHI
//#define PIFAGOR
//#define ROW_FIBONACHI
//#define DRAWING_1
//#define DRAWING_2
//#define DRAWING_3
//#define DRAWING_4
//#define DRAWING_5
//#define ROMB
//#define CHESS
//#define TRIANGLE_WITH_NUMBERS
//#define ASCII_2
//#define CHESS_2
/*#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX (char)219
#define BLACK_BOX '  '*/

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FOR

	setlocale(LC_ALL, "Russian");

	int n;
	cout << "введите количество итераций: "; cin >> n;
	for (int i = 0;           /*i-счетчик(определяет кол.циклов),i<n-условие,i++-изменяет счетчик*/
		i < n;
		i++)

	{
		cout << i << "\t";
	}
	cout << endl;
#endif FOR
#ifdef FAKTORIAL
	setlocale(LC_ALL, "Russian");
	int i, n, a = 1;
	cout << "введите цифру: " << endl;
	cin >> n;
	for (i = 1;
		i <= n;
		i++)
	{
		cout << i << endl;
		a = a * i;
	}
	cout << a;





#endif FAKTORIAL
#ifdef STEPENI
	setlocale(LC_ALL, "Russian");
	int i, n, a, b;
	cout << "введите число: "; cin >> a;
	cout << "введите степень: "; cin >> b;
	n = a;
	for (i = 1;
		i < b;
		i++)
		n = n * a;
	{
		cout << n << endl;
	}
	cout << endl;

#endif STEPENI

#ifdef ASCII

	for (int i = 0; i < 256; i++)
	{
		cout << char(i);
	}
#endif ASCII

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 10)cout << endl;
			if (i * j < 100)cout << endl;
			cout << j * i << endl;
		}

	}
#endif MULTIPLICATION_TABLE
#ifdef FIBONACHI
	setlocale(LC_ALL, "Russian");
	int n, a = 0, b = 1, c = 0;
	cout << "количество итераций "; cin >> n;
	for (int i = 0; i < n; i++)

	{
		a = b; b = c; c = a + b;
		cout << c << endl;

	}


#endif FIBONACHI
#ifdef PIFAGOR
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{

			cout << j * i << '\t';

		}
		cout << endl;
	}

#endif PIFAGOR
#ifdef ROW_FIBONACHI
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{

		cout << c << " ";
	}
	cout << endl;

#endif ROW_FIBONACHI
#ifdef DRAWING_1
	int size;
	cout << "размер: "; cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)

		{

			cout << "*";
		}
		cout << endl;
	}

#endif DRAWING_1
#ifdef DRAWING_2
	int size;
	cout << "размер: "; cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)

		{

			cout << "*";
		}
		cout << endl;
	}
#endif  DRAWING_2
#ifdef DRAWING_3
	int size;
	cout << "размер: "; cin >> size;
	for (int i = size; i > 0; i--)
	{

		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


#endif  DRAWING_3
#ifdef DRAWING_4
	int n;
	cout << "размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "  "; cout << "*";
		for (int j = 0; j < i; j++)cout << "**";
		cout << endl;
	}



#endif DRAWING_4

#ifdef DRAWING_5
	int n;
	cout << "размер: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " ";
		for (int j = i; j < n; j++)cout << "*";
		cout << endl;
	}
#endif  DRAWING_5

#ifdef ROMB
int n;
cout << "размер: "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)cout << " "; cout << "/";
	for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
	cout << endl;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
	for (int j = i + 1; j < n; j++)cout << "  "; cout << "/";
	cout << endl;
}




#endif  ROMB
#ifdef CHESS
int n;
cout << " Размер: "; cin >> n;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l < n; l++)
			{
				if ((i + k) % 2 == 0)cout << "* ";
				else cout << "  ";
			}
		}
		cout << endl;
	}
}
#endif  CHESS
#ifdef TRIANGLE_WITH_NUMBERS
int n;
cout << "размер: "; cin >> n;
for (int i = 0; i < n; i++)
{
	
	for (int j = i; j < n; j++)cout << " "; cout <<i;
	for (int j = 1; j < i+1; j++)cout<<" " <<i;

cout << endl;
}

#endif TRIANGLE_WITH_NUMBERS
#ifdef ASCII_2
setlocale(LC_ALL, "");   //Включает кирилицу
cout << "Таблица ASCII-символов:\n";
setlocale(LC_ALL, "C");   //Включает кодировку по умолчанию
for (int i = 176; i < 224; i++)
{
	if (i % 16 == 0)cout << endl;
	cout << i <<"   " <<(char)i << " ";
	cout << endl;
}
#endif ASCII_2
#ifdef CHESS_2




int n;
cout << "Введите размер доски: "; cin >> n;
setlocale(LC_ALL, "C");
n++;
for (int i = 0; i <=n; i++)
{
	for (int j = 0; j <=n; j++)
	{
		if (i == 0 && j == 0)cout <<UPPER_LEFT_ANGLE;
		else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
		else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
		else if (i == n && j == n)cout << UPPER_RIGHT_ANGLE;
		else if (i == 0 || i == n)cout << HORIZONTAL_LINE<<HORIZONTAL_LINE;
		else if (j == 0 || j == n)cout << VERTICAL_LINE;
		else
		{
			if (i % 2 == j % 2)cout << WHITE_BOX<<WHITE_BOX;
			else cout <<"  ";
		}

	}
	cout << endl;
}
#endif  CHESS_2




}

	



