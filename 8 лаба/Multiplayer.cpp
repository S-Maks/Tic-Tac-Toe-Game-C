#include "Multiplayer.h"
void Multiplayer::start(int size) {
	vector < vector <int> > array(size, vector <int>(size)); // ���������� ������� �� n ����� �� m ��������� 
	int n = size;
	for (int i = 0; i < size; i++)     // ����, ������� ��� �� �������
		for (int j = 0; j < size; j++) // ����, ������� ��� �� ���������
		{
			array[i][j] = 0; // ���������� ������� ��� ������� (� ������ ������ ����)
		}

	int kol = 0;
	int x = 0; int y = 0;
	bool flag = true;
	while (kol < pow(size, 2) && flag) {
		this->getView(array);
		flag = move(x, y, array, kol, size);
	}
}
void Multiplayer::setSize(int size) {
	Game::size = size;
}
int Multiplayer::getSize()
{
	return Game::size;
}
void Multiplayer::getView(vector<vector<int>> array) {
	switch (this->getSize())
	{
	case 3:
		FirstLevel::view(array);
		break;
	case 4:
		SecondLevel::view(array);
		break;
	case 5:
		ThirdLevel::view(array);
		break;
	default:
		break;
	}
}
void Multiplayer::choiseSize() {

	switch (MenuForEverything("\n\n\t\t\t\t\t����� ���� ��� ���������� ����","\t\t\t\t\t\t���� 3�3","\t\t\t\t\t\t���� 4�4","\t\t\t\t\t\t���� 5�5","",3))
	{
	case 1: {	
		Multiplayer obj(3);
		obj.start(3);
		break;
	}
	case 2:
	{

		Multiplayer obj(4);
		obj.start(4);
		break;
	}
	case 3:
	{

		Multiplayer obj(5);
		obj.start(5);
		break;
	}
	default:
		break;
	}
}
bool Multiplayer::move(int& x, int& y, vector<vector<int>>& field, int& kol, int size)
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
	case 72: if (y != 0)y -= 1;//�����

		break;
	case 80: if (y != size - 1)y += 1;//����
		break;
	case 75: if (x != 0)x -= 1;//�����
		break;
	case 77: if (x != size - 1)x += 1;//������
		break;
	case 13: if (field[y][x] == 0)
	{
		field[y][x] = 1;
		this->getView(field);

		if (Game::Winner(field, kol)) {
			SetColor(LightBlue, White);
			cout << "�� ��������!" << endl;
			SetColor(LightGreen, White);
			return false;
		}


		++kol;
		//PlayerComputer(field, kol);


		this->getView(field);

		if (Game::Winner(field, kol)) {
			SetColor(LightRed, White);
			cout << "������� ���������!" << endl;
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