#pragma once
#include "Header.h"
#include <ctime>
using namespace std;
class Game {
public:
	void choiceLevel();
	void start();
private:
	void view(vector<vector<int>>);
	void view1(vector<vector<int>> array);
	bool move(int& x, int& y, vector<vector<int>>& , int& kol);
	void PlayerComputer(vector<vector<int>>&, int);
	bool Winner(vector<vector<int>>, int);
	int size;
};