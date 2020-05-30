#pragma once
#include "FirstLevel.h"
#include "SecondLevel.h"
#include "ThirdLevel.h"
class Multiplayer :
	public FirstLevel, public SecondLevel, public ThirdLevel
{
public:
	Multiplayer(int size) {
		Game::size = size;
	}
	Multiplayer() {

	}
	void start(int );
	bool move(int& x, int& y, vector<vector<int>>&, int& kol, int size);
	void choiseSize();
	void setSize(int);
	int getSize();
	void getView(vector<vector<int>>);
};





