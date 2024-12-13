#include <iostream>
#include <string>
using namespace std;

void main()
{
	string pessoas[22] = {"Clara", "Abdulah", "André", "Andrei", "Hugo", "Paloma", "João", "Leonardo", "Miguel", "Pedro", "Pierre", "Rafael", "Ricardo", "Salvador", "Sartaj", "Tiago", "Tomás Filipe", "Ulisses", "Henrise", "Heros", "Tomás", "Tuqeer"};
	string produtor[6] = { "Batatas Fritas", "Bolo Rei", "Perfume", "Par de Meias", "Pijama", "Chocolate com Ginja" };
	int tabela[100][100], total = 0, totalP = 0, totalT = 0;

	for (int i = 0; i < 22; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << "quantas " << produtor[j] << " a " << pessoas[i]<<" trouxe para o natal ";
			cin >> tabela[j][i];
		}
	}
	for (int i = 0; i < 22; i++)
	{
		total = 0;
		for (int j = 0; j < 6; j++)
		{
			total = total + tabela[j][i];
		}
		cout << "A pessoa " << pessoas[i] << " trouxe " << total<<"\n";
	}
	for (int i = 0; i < 22; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			totalP = totalP + tabela[j][i];
		}
	}
	cout << "O total de produtor trazidos foram " << totalP << "\n";
	for (int i = 0; i < 6; i++)
	{
		totalT = 0;
		for (int j = 0; j < 22; j++)
		{
			totalT = totalT + tabela[i][j];
		}
		cout << "No total tem " << totalT <<" "<< produtor[i]<<"\n";
	}
}
