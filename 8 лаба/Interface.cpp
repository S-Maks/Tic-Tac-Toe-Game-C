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
	switch (MenuForEverything("\n\n\n\n\n\t\t\t\t\t\t����", "\t\t\t\t\t1 - ����� ������", "\t\t\t\t\t2 - � ����", "\t\t\t\t\t0 - �����", " ", 3))
	{
	case 1:
		Game::choiceLevel();
		break;
	case 2:
		break;
	case 0:
		break;
	default:
		break;
	}


}
