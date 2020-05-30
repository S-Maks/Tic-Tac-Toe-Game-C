#pragma once
#include "Game.h"
class FirstLevel :	public Game
{
public:
	FirstLevel(int size) {
		this->size = size;
	}
	FirstLevel() {
		this->size = 3;
	}
	void start();
protected:
	bool move(int& x, int& y, vector<vector<int>>&, int& kol);
	void view(vector<vector<int>>);
};

