#include <iostream>
#include <string>
using namespace std;

void main()
{
	int numero[10], menu,i, contador = 0, somar = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "Diz o " << i + 1 << " numero";
		cin >> numero[i];
	}
	cout << "Quer conta(1) ou somar(2) Numeros negativos ";
	cin >> menu;
	switch (menu)
	{
		case 1:
			for (i = 0; i < 10; i++)
			{
				if (numero[i] < 0)
				{
					contador = contador + 1;
				}
			}
			cout << "A lista contem " << contador << " Numeros negativos";
			break;
		case 2:
			for (i = 0; i < 10; i++)
			{
				if (numero[i] < 0)
				{
					somar = somar + numero[i];
				}
			}
			cout << "A somar de todos os numeros negativos dao " << somar;
			break;
	
	default:
		cout << "Vazaaaa daquiiiiiii";
		break;
	}
}