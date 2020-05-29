#pragma once
#include "Game.h"
class SecondLevel :	public Game
{
public:
	SecondLevel(int size) {
		this->size = size;
	}
	SecondLevel() {
		this->size = 4;
	}
	void start();
private:
	bool move(int& x, int& y, vector<vector<int>>&, int& kol);
	void view(vector<vector<int>>);

};

