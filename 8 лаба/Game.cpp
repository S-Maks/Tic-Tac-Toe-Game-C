#include "Game.h"
#include "FirstLevel.h"
#include "SecondLevel.h"
#include "ThirdLevel.h"
#include "Multiplayer.h"
void Game::choiceLevel() {
	switch (MenuForEverything("\n\n\n\n\n\t\t\t\t\t\tВыбор уровня сложности", "\t\t\t\t\t1 Уровень(3х3)", "\t\t\t\t\t2 Уровень(4х4)", "\t\t\t\t\t3 Уровень(5х5)", "\t\t\t\t\tМультиплеер", 4))
	{
	case 1:
	{
		cout << "\t\tВыбран легкий уровень сложности" << endl;
		FirstLevel obj;
		obj.start();
		break;
	}
	case 2:
	{
		cout << "\t\tВыбран средний уровень сложности" << endl;
		SecondLevel obj;
		obj.start();

		break;
	}
	case 3:
	{
		cout << "\t\tВыбран тяжелый уровень сложности" << endl;
		ThirdLevel obj;
		obj.start();
		break;
	}
	case 4: {
		cout << "\t\tВыбран мультиплеерный режим" << endl;
		Multiplayer obj;
		obj.choiseSize();
	break;
	}
	default:
		break;
	}
}
void Game::PlayerComputer(vector<vector<int>>& array, int kol) {

	if (kol < pow(this->size, 2)) {
		cout << "Ходит Компьютер..." << endl;

		if (AlgorithmsWin(array)) {
			if (AlgorithmsUnWin(array)) {

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
		}
		
		
	}
	else {
		cout << "\t\tХоды закончились!" << endl;
		SetColor(LightBlue, White);
		cout << "\n\t\t\tНичья!" << endl;
		
		SetColor(LightGreen, White);
		system("pause");
	}
}
bool Game::Winner(vector<vector<int>> array, int kol) {
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
	for (int i = this->size - 1; i > 1; i--) {
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

bool Game::AlgorithmsUnWin(vector<vector<int>>& array) {
	/*Проверка выигрыша главной диагонали*/


		cout << "Ходит Компьютер..." << endl;

		for (int i = 0; i < this->size - 2; i++) {
			for (int j = 0; j < this->size - 2; j++) {
				if (array[i][j] == 0 && array[i + 1][j + 1] == 1 && array[i + 2][j + 2] == 1) {//проверка пустого первого элемента
					array[i][j] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i + 1][j + 1] == 0 && array[i + 2][j + 2] == 1) {//проверка пустого второго элемента
					array[i + 1][j + 1] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i + 1][j + 1] == 1 && array[i + 2][j + 2] == 0) {//проверка пустого Третьего элемента
					array[i + 2][j + 2] = 2;
					return false;
				}
			}
		}
		/*Проверяем побочную диагональ*/

		for (int i = this->size - 1; i > 1; i--) {
			for (int j = 0; j < this->size - 2; j++) {
				if (array[i][j] == 0 && array[i - 1][j + 1] == 1 && array[i - 2][j + 2] == 1) {//проверка пустого первого элемента
					array[i][j] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i - 1][j + 1] == 0 && array[i - 2][j + 2] == 1) {//проверка пустого второго элемента
					array[i-1][j+1] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i - 1][j + 1] == 1 && array[i - 2][j + 2] == 0) {//проверка пустого Третьего элемента
					array[i - 2][j + 2] = 2;
					return false;
				}
			}
		}
		/*Проверяем строки*/
		for (int i = 0; i < this->size; i++) {
			for (int j = 0; j < this->size - 2; j++) {
				if (array[i][j] == 0 && array[i][j + 1] == 1 && array[i][j + 2] == 1) {//проверка пустого первого элемента
					array[i][j] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i][j + 1] == 0 && array[i][j + 2] == 1) {//проверка пустого второго элемента
					array[i][j + 1] = 2;
					return false;
				}
				if (array[i][j] == 1 && array[i][j + 1] == 1 && array[i][j + 2] == 0) {
					array[i][j + 2] = 2;
					return false;
				}

			}
		}

		/*Проверяем столбцы*/
		for (int i = 0; i < this->size; i++) {
			for (int j = 0; j < this->size - 2; j++) {
				if (array[j][i] == 0 && array[j + 1][i] == 1 && array[j + 2][i] == 1) {//проверка пустого первого элемента
					array[j][i] = 2;
					return false;
				}
				if (array[j][i] == 1 && array[j + 1][i] == 0 && array[j + 2][i] == 1) {//проверка пустого второго элемента
					array[j + 1][i] = 2;
					return false;
				}
				if (array[j][i] == 1 && array[j + 1][i] == 1 && array[j + 2][i] == 0) {//проверка пустого Третьего элемента
					array[j + 2][i] = 2;
					return false;
				}

			}
		}

	return true;

}
bool Game::AlgorithmsWin(vector<vector<int>>& array) {
	/*Проверка выигрыша главной диагонали*/


	cout << "Ходит Компьютер..." << endl;

	for (int i = 0; i < this->size - 2; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 0 && array[i + 1][j + 1] == 2 && array[i + 2][j + 2] == 2) {//проверка пустого первого элемента
				array[i][j] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i + 1][j + 1] == 0 && array[i + 2][j + 2] == 2) {//проверка пустого второго элемента
				array[i + 1][j + 1] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i + 1][j + 1] == 2 && array[i + 2][j + 2] == 0) {//проверка пустого Третьего элемента
				array[i + 2][j + 2] = 2;
				return false;
			}
		}
	}
	/*Проверяем побочную диагональ*/

	for (int i = this->size - 1; i > 1; i--) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 0 && array[i - 1][j + 1] == 2 && array[i - 2][j + 2] == 2) {//проверка пустого первого элемента
				array[i][j] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i - 1][j + 1] == 0 && array[i - 2][j + 2] == 2) {//проверка пустого второго элемента
				array[i - 1][j + 1] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i - 1][j + 1] == 2 && array[i - 2][j + 2] == 0) {//проверка пустого Третьего элемента
				array[i - 2][j + 2] = 2;
				return false;
			}
		}
	}
	/*Проверяем строки*/
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[i][j] == 0 && array[i][j + 1] == 2 && array[i][j + 2] == 2) {//проверка пустого первого элемента
				array[i][j] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i][j + 1] == 0 && array[i][j + 2] == 2) {//проверка пустого второго элемента
				array[i][j + 1] = 2;
				return false;
			}
			if (array[i][j] == 2 && array[i][j + 1] == 2 && array[i][j + 2] == 0) {
				array[i][j + 2] = 2;
				return false;
			}

		}
	}

	/*Проверяем столбцы*/
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 2; j++) {
			if (array[j][i] == 0 && array[j + 1][i] == 2 && array[j + 2][i] == 2) {//проверка пустого первого элемента
				array[j][i] = 2;
				return false;
			}
			if (array[j][i] == 2 && array[j + 1][i] == 0 && array[j + 2][i] == 2) {//проверка пустого второго элемента
				array[j + 1][i] = 2;
				return false;
			}
			if (array[j][i] == 2 && array[j + 1][i] == 2 && array[j + 2][i] == 0) {//проверка пустого Третьего элемента
				array[j + 2][i] = 2;
				return false;
			}

		}
	}

	return true;
}