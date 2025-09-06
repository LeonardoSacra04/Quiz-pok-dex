#include <iostream>
using namespace std;

const int MAX = 151;
int pokedex[MAX]
{
	int pos(001, 002, 003, 004);
	string name("bulbasaur", "ivysaur", "venusaur", "charmander");
}

// headers
void menu();
void iniciar();
// headers

int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 2)
	{
		system("cls"); // somente no windows
		cout << "POKEDEX PRIMEIRA GERACAO";
		cout << endl << endl;
		cout << "1 - Iniciar \n";
		cout << "2 - Fechar \n\n";

		cout << "===> ";
		cin >> op;

		switch (op)
		{
		case 1: iniciar();
			break;

		case 2: 
			return;
		default: 
			break;
		}

		system("pause"); // somente no windows
	}
}

void iniciar()
{

}