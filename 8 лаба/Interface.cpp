#include "Header.h"
template <class T>
class Interface
{
private:
	T obj;

public:
	void menu();				//Главное меню программы
};

template <class T>
void Interface<T>::menu()
{
	Game obj;
	switch (MenuForEverything("\t\tМеню", "1 - Выбор уровня", "2 - О игре", "0 - Выход", " ", 3))
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
