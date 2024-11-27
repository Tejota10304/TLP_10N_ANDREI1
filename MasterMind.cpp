#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void main()
{
	
	int secretos[4], escolha[4], acertos = 0;
	srand(time(0));
	do {
		for (int i = 0; i < 4; i++)
		{
			secretos[i] = rand() % 2;
			i + 1;
		}
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
		cout << "Voce acertou " << acertos<<"\n";
		if (acertos == 4)
		{
			cout << "Parabens voce  ganhou 1 MILHAO DE DOLARES";
		}
	} while (acertos < 4);
	
}