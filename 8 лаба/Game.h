#pragma once
#include "Header.h"
#include <ctime>
using namespace std;
class Game {
public:
	static void choiceLevel();
	
protected:

	void PlayerComputer(vector<vector<int>>&, int);
	bool Winner(vector<vector<int>>, int);
	int size;
};