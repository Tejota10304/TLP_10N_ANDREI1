#include <iostream>
#include <string>
using namespace std;

void main()
{
	string nomes[6];
	int i;
	char continuar;

	do{
		for (i = 0; i < 5; i++)
		{
			cout << "Me de " << i + 1 << " nome ";
			cin >> nomes[i];
		}
		for (i = 4; i > 0; i--)
		{
			cout << "O nome e " << nomes[i] << " e o " << i << "\n";
		}
		cout << "Deseja continuar ? s/n";
		cin >> continuar;
		if (continuar != 's' && 'n')
		{
			cout << "Burooooooo apenas s/n";
		}
		if (continuar == 'n')
		{
			break;
		}
	
	} while (continuar == 's');
}