#include <iostream>
using namespace std;

void main()
{
	char Tipo;
	float C, F;
	cout << "Escolha 'c' para Celsius e 'f' para Fahrenheit \n";
	cout << "Qual tipo voce quer? ";
	cin >> Tipo;
	switch (Tipo)
	{
	case 'c':
	case 'C':
		cout << "Qual Numero ? ";
		cin >> C;
		cout << "O valor em Celsius e > " << C << "\n";
		cout << "O valor em Fahrenheit e > " << C * 1.8 + 32;
		break;
	case 'f':
	case 'F':
		cout << "Qual e o Numero ? ";
		cin >> F;
		cout << "O valor em Fahrenheit e > " << F<<"\n";
		cout << "O valor em Celsius e > " << (F - 32) * 5 / 9;
		break;

	default:
		cout << "Burro e apenas C e F";
		break;
	}
}
