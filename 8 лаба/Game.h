#pragma once
#include "Header.h"
#include <ctime>
using namespace std;
class Game {
public:
	static void choiceLevel();
	
protected:
	bool AlgorithmsUnWin(vector<vector<int>>&);
	bool AlgorithmsWin(vector<vector<int>>&);
	void PlayerComputer(vector<vector<int>>&, int);
	bool Winner(vector<vector<int>>, int);
	int size;
};