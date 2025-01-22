#include <iostream>
#include <string>
using namespace std;

int MelhoresFilmes[100][100];
string Filmes[100] = { "Hacksaw ridge","Gatsby","Redeeming love" };
string categoria[100] = { "Melhor atores","Melhor Banda sonora"," melhor fotografia " };
int avaliar()
{
cout << "Me de uma nota de 1 a 10, para cada categoria dos filmes a baixo\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "O filme " << Filmes[i] << " na categoria de " << categoria[j] << " ";
			cin >> MelhoresFilmes[i][j];
		}
	}
	return 0;
}

int miohcategorias()
{

	for (int j = 0; j < 3; j++)
	{
		int MelhorNota = 0;
		for (int i = 0; i < 3; i++)
		{
			if (MelhoresFilmes[i][j] > MelhorNota)
			{
				MelhorNota = i;
			}
		}
		cout << "Melhor filme na categoria " << categoria[j] << " e o " << Filmes[MelhorNota] << "\n";
	}
return 0;
}

int Melhorfilme()
{
	int Total[100]={'0','0','0'}, Nota=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Total[i] = +MelhoresFilmes[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Total[i] > Nota)
			{
				Nota = i;
			}
		}
	}
	cout << "O melhor filme e o " << Filmes[Nota] << "\n";
	return 0;
}

void menu()
{
	int escolha;

	cout << "Bem-Vindo\n";
	do
	{
		cout << "Oque deseja fazer:\n";
		cout << "1-Melhor Filme: \n" << "2-Melhor em categoria: \n" << "3-Avaliar filme: ";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
		{
			Melhorfilme();
			break;
		}
		case 2:
		{
			miohcategorias();
			break;
		}
		case 3:
		{
			avaliar();
		}
		}
	} while (true);
}

void main()
{
	menu();
}