#include "Header.h"
template <class T>
class Interface
{
private:
	T obj;

public:
	void menu();				//������� ���� ���������
};

template <class T>
void Interface<T>::menu()
{
	bool flag = true;
	while (flag) {
		switch (MenuForEverything("\n\n\n\n\n\t\t\t\t\t\t����", "\t\t\t\t\t ����� ������", "\t\t\t\t\t � ����", "\t\t\t\t\t �����", " ", 3))
		{
		case 1:
			Game::choiceLevel();
			break;
		case 2:
			Game::Help();
			system("pause");
			break;
		case 3:flag = false;
			break;
		default:
			break;
		}

	}
	

}
