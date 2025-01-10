#include <iostream>
using namespace std;

int media(int M[10])
{
	int total = 0, resultado = 0;
	for (int i = 0; i < 10; i++)
	{
		total = M[i] + total;
	}
	resultado = total / 10;
	cout << "a media e " << resultado;
	return 0;
}
int maior(int M[10])
{
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		if (M[i] > total)
		{
			total = M[i];
		}
	}
	cout << "O maior e o " << total;
	return 0;
}
int menor(int M[10])
{
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		if (total > M[i])
		{
			total = M[i];
		}
	}
	cout << "O menor e o " << total;
	return 0;
}

void main()
{ 
	int numero[10];
		for (int i = 0; i < 10; i++)
		{
			cout << "Me de o " << i + 1 << " numero ";
			cin >> numero[i];
		}
	int escolha = 0;
	cout << "1 - calcular a media dos numeros\n";
	cout << "2 - achar o maior \n";
	cout << "3 - achar o menor \n";
	cout << "0 - sair \n";
	cout << "Oque voce quer fazer ";
	cin >> escolha;
	switch (escolha)
	{
		
	case 1:
	{
		media(numero);
		break;
	}
	case 2:
	{
		maior(numero);
		break;
	}
	case 3:
	{
		menor(numero);
		break;
	}
	}
}