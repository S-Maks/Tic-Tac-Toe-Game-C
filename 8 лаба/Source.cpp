#include "Interface.cpp"

int main() {
	setlocale(LC_ALL, "Russian");
	SetColor(LightGreen, White);
	Interface<int> obj;
	obj.menu();

	return 0;
}