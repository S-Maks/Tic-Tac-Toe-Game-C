#include "Interface.cpp"

int main() {
	setlocale(LC_ALL, "Russian");
	SetColor(LightGreen, White);
	Interface<int> obj;
	obj.menu();
	system("pause");
	return 0;
}