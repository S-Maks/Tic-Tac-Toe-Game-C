#include "Game.h"

void Game::choiceLevel() {
	switch (MenuForEverything("\t\tВыбор уровня сложности", "1 Уровень", "2 Уровень", "3 Уровень", "", 3))
	{
	case 1:
	{
		this->size = 3;
		cout << "\t\tВыбран легкий уровень сложности" << endl;

		this->start();
		break;
	}
	case 2:
	{
		this->size = 4;
		cout << "\t\tВыбран средний уровень сложности" << endl;

		this->start();
		break;
	}
	case 3:
	{
		this->size = 5;
		cout << "\t\tВыбран тяжелый уровень сложности" << endl;

		this->start();
		break;
	}
	default:
		break;
	}
}
void Game::start() {

	vector < vector <int> > array(this->size, vector <int>(this->size)); // Объявление вектора на n строк по m элементов 
	int n = this->size;
	for (int i = 0; i < this->size; i++)     // Цикл, который идёт по строкам
		for (int j = 0; j < this->size; j++) // Цикл, который идёт по элементам
		{
			array[i][j] = 0; // Заполнение вектора или массива (в данном случае ввод)
		}

	int kol = 0;
	int x = 0; int y = 0;
	bool flag = true;
	while (kol < pow(this->size, 2) && flag) {
		view(array);
		flag = move(x, y, array, kol);
	}

}
void Game::view(vector<vector<int>> array) {
	system("cls");
	cout << "-------------------" << endl;
	for (int i = 0; i < 3; i++)// проход по строке поля
	{
		for (int a = 1; a < 6; ++a)//проход по вертикали(построчно)
		{
			switch (a)
			{
				//case 1:case 5: cout << "|     |     |     |" << endl; break;
			case 2:
				switch (array[i][0])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "| X X "; break;
				case 2:cout << "| 000 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
					//case 4:cout << "| ### "; break;
				case 5:cout << "| ... "; break;
				}
				switch (array[i][1])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "| X X "; break;
				case 2:cout << "| 000 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
				case 5:cout << "| ... "; break;

				}
				switch (array[i][2])
				{
				case 0:cout << "|     |"; break;
				case 1:cout << "| X X |"; break;
				case 2:cout << "| 000 |"; break;
					/*case 3:cout << "| ### |"; break;
					case 4:cout << "| ### |"; break;*/
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "###";
					SetColor(LightGreen, White);
					cout << " |";
					break;
				case 5:cout << "| ... |"; break;
				}
				cout << endl; break;
			case 3:
				switch (array[i][0])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "|  X  "; break;
				case 2:cout << "| 0 0 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
				case 5:cout << "| ... "; break;
				}
				switch (array[i][1])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "|  X  "; break;
				case 2:cout << "| 0 0 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
				case 5:cout << "| ... "; break;
				}
				switch (array[i][2])
				{
				case 0:cout << "|     |"; break;
				case 1:cout << "|  X  |"; break;
				case 2:cout << "| 0 0 |"; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "###";
					SetColor(LightGreen, White);
					cout << " |";
					break;
				case 5:cout << "| ... |"; break;
				}
				cout << endl; break;
			case 4:
				switch (array[i][0])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "| X X "; break;
				case 2:cout << "| 000 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
				case 5:cout << "| ... "; break;
				}
				switch (array[i][1])
				{
				case 0:cout << "|     "; break;
				case 1:cout << "| X X "; break;
				case 2:cout << "| 000 "; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "### ";
					SetColor(LightGreen, White);
					break;
				case 5:cout << "| ... "; break;
				}
				switch (array[i][2])
				{
				case 0:cout << "|     |"; break;
				case 1:cout << "| X X |"; break;
				case 2:cout << "| 000 |"; break;
				case 3: case 4: cout << "| ";
					SetColor(Red, White);
					cout << "###";
					SetColor(LightGreen, White);
					cout << " |";
					break;
				case 5:cout << "| ... |"; break;
				}
				cout << endl; break;
			}
		}

		if (i == 2)cout << "-------------------";
		else cout << "-------------------";
		cout << endl;
	}
}

bool Game::move(int& x, int& y, vector<vector<int>>& field, int& kol)
{
	switch (field[y][x])
	{
	case 0:case 1:case 2:break;
	case 3:field[y][x] = 1; break;
	case 4:field[y][x] = 2; break;
	case 5:field[y][x] = 0; break;
	}

	int test = _getch();
	if (test != 13) {
		test = _getch();
	}

	switch (test)
	{
	case 72: if (y != 0)y -= 1;//вверх

		break;
	case 80: if (y != 2)y += 1;//вниз
		break;
	case 75: if (x != 0)x -= 1;//влево
		break;
	case 77: if (x != 2)x += 1;//вправо
		break;
	case 13: if (field[y][x] == 0)
	{
		field[y][x] = 1;
		view(field);
		if (Winner(field, kol)) {
			cout << "Вы победили!" << endl;
			return false;
		}


		++kol;
		PlayerComputer(field, kol);
		if (Winner(field, kol)) {
			cout << "Победил Компьютер!" << endl;
			return false;
		}

		++kol;

	}
		   break;
	default: cout << endl << "error" << endl;
	}
	switch (field[y][x])
	{
	case 1:field[y][x] = 3; break;
	case 2:field[y][x] = 4; break;
	case 0:field[y][x] = 5; break;
	}
	return true;
}

void Game::PlayerComputer(vector<vector<int>>& array, int kol) {

	if (kol < pow(this->size, 2)) {
		cout << "Ходит Компьютер..." << endl;
		while (true) {
			int x, y;
			srand(time(0));
			x = rand() % this->size;
			//Sleep(1000);
			y = rand() % this->size;

			if (array[x][y] == 0) {
				array[x][y] = 2;
				break;
			}
		}
	}
	else {
		cout << "Ходы закончились!" << endl;
	}
}
bool::Game::Winner(vector<vector<int>> array, int kol) {
	for (int i = 0; i < this->size - 2; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 1 && array[i + 1][j + 1] == 1 && array[i + 2][j + 2] == 1) {
				return true;
			}
			if (array[i][j] == 2 && array[i + 1][j + 1] == 2 && array[i + 2][j + 2] == 2) {
				return true;
			}
		}
	}
	for (int i = this->size - 1; i > this->size - 2; i--) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 1 && array[i - 1][j + 1] == 1 && array[i - 2][j + 2] == 1) {
				return true;
			}
			if (array[i][j] == 2 && array[i - 1][j + 1] == 2 && array[i - 2][j + 2] == 2) {
				return true;
			}
		}
	}
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 1 && array[i][j + 1] == 1 && array[i][j + 2] == 1)
				return true;
			if (array[i][j] == 2 && array[i][j + 1] == 2 && array[i][j + 2] == 2)
				return true;
		}

	}

	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[j][i] == 1 && array[j + 1][i] == 1 && array[j + 2][i] == 1)
				return true;
			if (array[j][i] == 2 && array[j + 1][i] == 2 && array[j + 2][i] == 2)
				return true;
		}
	}
	return false;
}