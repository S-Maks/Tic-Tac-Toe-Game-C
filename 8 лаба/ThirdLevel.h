#pragma once
#include "Game.h"
class ThirdLevel :	public Game
{
public:
	ThirdLevel(int size) {
		this->size = size;
	}
	ThirdLevel() {
		this->size = 5;
	}
	void start();
protected:
	bool move(int& x, int& y, vector<vector<int>>&, int& kol);
	void view(vector<vector<int>>);
};

