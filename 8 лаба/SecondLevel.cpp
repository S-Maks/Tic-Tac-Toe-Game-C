#include "SecondLevel.h"
void SecondLevel::view(vector<vector<int>> array) {
	system("cls");
	cout << "-------------------------" << endl;
	for (int i = 0; i < this->size; i++)// проход по строке поля
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
				switch (array[i][3])
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
				switch (array[i][3])
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
				switch (array[i][3])
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
			}
		}

		if (i == 2)cout << "-------------------------";
		else cout << "-------------------------";
		cout << endl;
	}
}
void SecondLevel::start() {

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
bool SecondLevel::move(int& x, int& y, vector<vector<int>>& field, int& kol)
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
	case 80: if (y != this->size - 1)y += 1;//вниз
		break;
	case 75: if (x != 0)x -= 1;//влево
		break;
	case 77: if (x != this->size - 1)x += 1;//вправо
		break;
	case 13: if (field[y][x] == 0)
	{
		field[y][x] = 1;
		view(field);

		if (Winner(field, kol)) {
			SetColor(LightBlue, White);
			cout << "Вы победили!" << endl;
			SetColor(LightGreen, White);
			return false;
		}


		++kol;
		PlayerComputer(field, kol);
		view(field);

		if (Winner(field, kol)) {
			SetColor(LightRed, White);
			cout << "Победил Компьютер!" << endl;
			SetColor(LightGreen, White);
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