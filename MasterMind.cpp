#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void main()
{

	int secretos[4], escolha[4], acertos = 0, vezes = 0;
	srand(time(0));

	for (int i = 0; i < 4; i++)
	{
		secretos[i] = rand() % 2;
		i + 1;
	}
	do {
		acertos = 0;
		cout << "Adivinha os meus 4 Numero:\nApenas 0/1 \n";
		for (int i = 0; i < 4; i++)
		{
			cin >> escolha[i];
			i + 1;
		}
		for (int i = 0; i < 4; i++)
		{
			if (escolha[i] == secretos[i])
			{
				acertos++;
			}
		}
		vezes++;
		cout << "Voce acertou " << acertos << "\n";
		if (acertos == 4)
		{
			cout << "Parabens voce  ganhou 1 MILHAO DE DOLARES\n" << "Em " << vezes << " tentativas";
		}
	} while (acertos < 4);

}
