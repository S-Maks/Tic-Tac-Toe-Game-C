#pragma once
#include "Header.h"

void SetColor(ConsoleColor text, ConsoleColor background) //Функция определения цвета консоли
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
}

bool isFigure(string text)                        //Проверка на наличие букв
{
	for (int n = 0; n != text.length(); n++)
	{
		switch (text[n])
		{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			break;
		default:
			return false; //Если имеется буква, то возвращаем false
		}
	}
	return true; //Если букв нет, то возвращается true
}

template<class T>
bool compare(T* a, T* b, int trigger)
{
	switch (trigger)
	{
	case 1:
		return a->lifeTime > b->lifeTime;
		break;
	}
}
int UnnumericProtection(int border1, int border2)//проверка с границами
{
	int A;
	while (!(cin >> A) || A< border1 || A>border2 || cin.get() != '\n')
	{
		cout << "Неверный вввод! Попробуйте снова.\n";
		cin.clear();
		cin.ignore(256, '\n');
	}
	return A;
}
int MenuForEverything(string s0, string st1, string st2, string st3, string st4, int n) {
	int schetchik = 1, a;
	char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
	while (true)
	{
		system("cls");
		if (schetchik == 1)
		{
			ch1 = '>'; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 2)
		{
			ch1 = ' '; ch2 = '>'; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 3)
		{
			ch1 = ' '; ch2 = ' '; ch3 = '>'; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 4)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = '>'; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 5)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = '>'; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 6)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = '>'; ch7 = ' '; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 7)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = '>'; ch8 = ' '; ch9 = ' ';
		}
		if (schetchik == 8)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = '>'; ch9 = ' ';
		}
		if (schetchik == 9)
		{
			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = '>';
		}
		if (n == 2) {
			if (ch1 == '>')
			{
				SetColor(LightGreen, White);
				SetColor(LightGreen, White); cout << s0 << endl;
				SetColor(Red, White);
				cout << ch1 << st1 << endl;
				SetColor(LightGreen, White);
				cout << ch2 << st2 << endl;
			}
			if (ch2 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl;
				SetColor(Red, White);
				cout << ch2 << st2 << endl;
				SetColor(LightGreen, White);

			}
		}
		if (n == 3) {
			if (ch1 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				SetColor(Red, White);
				cout << ch1 << st1 << endl;
				SetColor(LightGreen, White);
				cout << ch2 << st2 << endl << ch3 << st3 << endl;
			}
			if (ch2 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl;
				SetColor(Red, White);
				cout << ch2 << st2 << endl;
				SetColor(LightGreen, White);
				cout << ch3 << st3 << endl;
			}
			if (ch3 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl << ch2 << st2 << endl;
				SetColor(Red, White);
				cout << ch3 << st3 << endl;
				SetColor(LightGreen, White);
			}


		}
		if (n == 4)
		{
			if (ch1 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				SetColor(Red, White);
				cout << ch1 << st1 << endl;
				SetColor(LightGreen, White);
				cout << ch2 << st2 << endl << ch3 << st3 << endl << ch4 << st4 << endl;
			}
			if (ch2 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl;
				SetColor(Red, White);
				cout << ch2 << st2 << endl;
				SetColor(LightGreen, White);
				cout << ch3 << st3 << endl << ch4 << st4 << endl;
			}
			if (ch3 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl << ch2 << st2 << endl;
				SetColor(Red, White);
				cout << ch3 << st3 << endl;
				SetColor(LightGreen, White);
				cout << ch4 << st4 << endl;
			}
			if (ch4 == '>')
			{
				SetColor(LightGreen, White); cout << s0 << endl;
				cout << ch1 << st1 << endl << ch2 << st2 << endl << ch3 << st3 << endl;
				SetColor(Red, White);
				cout << ch4 << st4 << endl;
				SetColor(LightGreen, White);
			}
		}
		
		a = _getch();
		if (a == 13)
			return schetchik;
		a = _getch();
		if (a == 224)// на последующих открытиях менб 1-ый гетч не видит программа, оэтому ставим 3-ий для обнаружения стрелок(т.к. при одном гетче они имеют код 224)
			a = _getch();
		if (a == 13)
			return schetchik;
		if (a == 72)
			schetchik--;
		if (schetchik == 0)
			schetchik = n;
		if (a == 80)
			schetchik++;
		if (schetchik == n + 1)
			schetchik = 1;
	}
}