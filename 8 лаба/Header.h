#pragma once
#include <vector>
#include "Game.h"
#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
using namespace std;

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

bool isFigure(string text);
void SetColor(ConsoleColor text, ConsoleColor background);
int UnnumericProtection(int border1, int border2);
int MenuForEverything(string s0, string st1, string st2, string st3, string st4, int n);