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
	Game obj;
	switch (MenuForEverything("\t\t����", "1 - ����� ������", "2 - � ����", "0 - �����", " ", 3))
	{
	case 1:
		obj.choiceLevel();
		break;
	case 2:
		break;
	case 0:
		break;
	default:
		break;
	}


}
