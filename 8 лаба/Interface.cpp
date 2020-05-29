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
	switch (MenuForEverything("\n\n\n\n\n\t\t\t\t\t\tМеню", "\t\t\t\t\t1 - Выбор уровня", "\t\t\t\t\t2 - О игре", "\t\t\t\t\t0 - Выход", " ", 3))
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
