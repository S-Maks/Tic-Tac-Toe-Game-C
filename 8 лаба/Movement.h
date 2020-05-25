//#pragma once
//#include <iostream>
//#include "Header.h"
//#include <string>
//
//int MenuForEverything(string s0, string st1, string st2, string st3, string st4, string st5, string st6, string st7, string st8, string st9, int n) {
//	int schetchik = 1, a;
//	char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
//	while (true)
//	{
//		system("cls");
//		if (schetchik == 1)
//		{
//			ch1 = '>'; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 2)
//		{
//			ch1 = ' '; ch2 = '>'; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 3)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = '>'; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 4)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = '>'; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 5)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = '>'; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 6)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = '>'; ch7 = ' '; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 7)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = '>'; ch8 = ' '; ch9 = ' ';
//		}
//		if (schetchik == 8)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = '>'; ch9 = ' ';
//		}
//		if (schetchik == 9)
//		{
//			ch1 = ' '; ch2 = ' '; ch3 = ' '; ch4 = ' '; ch5 = ' '; ch6 = ' '; ch7 = ' '; ch8 = ' '; ch9 = '>';
//		}
//		if (n == 2) {
//			if (ch1 == '>')
//			{
//
//				cout << s0 << endl;
//
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl;
//			}
//			if (ch2 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl;
//
//
//			}
//		}
//		if (n == 3) {
//			if (ch1 == '>')
//			{
//				cout << s0 << endl;
//
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl << ch3 << st3 << endl;
//			}
//			if (ch2 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl;
//
//				cout << ch3 << st3 << endl;
//			}
//			if (ch3 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl << ch2 << st2 << endl;
//
//				cout << ch3 << st3 << endl;
//
//			}
//
//
//		}
//		if (n == 4)
//		{
//			if (ch1 == '>')
//			{
//				cout << s0 << endl;
//
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl << ch3 << st3 << endl << ch4 << st4 << endl;
//			}
//			if (ch2 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl;
//
//				cout << ch2 << st2 << endl;
//
//				cout << ch3 << st3 << endl << ch4 << st4 << endl;
//			}
//			if (ch3 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl << ch2 << st2 << endl;
//
//				cout << ch3 << st3 << endl;
//
//				cout << ch4 << st4 << endl;
//			}
//			if (ch4 == '>')
//			{
//				cout << s0 << endl;
//				cout << ch1 << st1 << endl << ch2 << st2 << endl << ch3 << st3 << endl;
//
//				cout << ch4 << st4 << endl;
//
//			}
//		}
//		a = _getch();
//		if (a == 13)
//			return schetchik;
//		a = _getch();
//		if (a == 224)// на последующих открытиях менб 1-ый гетч не видит программа, оэтому ставим 3-ий для обнаружения стрелок(т.к. при одном гетче они имеют код 224)
//			a = _getch();
//		if (a == 13)
//			return schetchik;
//		if (a == 72)
//			schetchik--;
//		if (schetchik == 0)
//			schetchik = n;
//		if (a == 80)
//			schetchik++;
//		if (schetchik == n + 1)
//			schetchik = 1;
//	}
//}