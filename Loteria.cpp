#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void main()
{
	char escolha;
	int i, j;
	int acertos = 0;
	int Numero[5];
	int Loteria[5];
	do{
	srand(time(0));
		for (int i = 0; i < 5; i++)
		{
			Loteria[i] = rand() % 50 + 1;
		}
		cout << "Bem-vindo a LotoBitcoins esta  acumulada em 1 MILHAO DE BITCOINS\n";
		for (i = 0; i < 5; i++)
		{
			cout << "Me de o " << i + 1 << " Numero da LotoBitcoins: ";
			cin >> Numero[i];
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (Numero[i] == Loteria[j])
				{
					acertos++;
					break;
				}
			}
		}
		if (acertos >= 5)
		{
			cout << "Parabens voce ganhou 1 MiLHAO de BITCOINS\n";
			cout << "Voce acertou " << acertos << " Numeros";
		}
		else
		{
			cout << "Infelismente voce nao ganhou Tente outras vez\n";
			cout << "Voce acertou " << acertos << " Numeros";
		}
		cout << "\nDeseja jogar de novo? s/n\n ";
		cin >> escolha;
		if (escolha == 'n')
		{
			break;
		}
	} while (escolha == 's');
}
