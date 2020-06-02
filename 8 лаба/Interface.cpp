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
	bool flag = true;
	while (flag) {
		switch (MenuForEverything("\n\n\n\n\n\t\t\t\t\t\tМеню", "\t\t\t\t\t Выбор уровня", "\t\t\t\t\t О игре", "\t\t\t\t\t Выход", " ", 3))
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
