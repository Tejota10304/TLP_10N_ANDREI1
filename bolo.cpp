#include <iostream>
using namespace std;

void main()
{
	int bolo, pessoas, resultado, sobra;
	cout << "Quantos pedaços de bolo a: ";
	cin >> bolo;
	cout << "Quantas pessoas a na familia: ";
	cin >> pessoas;
	if (bolo < pessoas)
	{
		cout << "a mais pessoas do que bolo\n ";
	}
	else {
		resultado = bolo / pessoas;
		sobra = bolo % pessoas;
		cout << "cada pessoas recebera\n " << resultado;
		cout << "sobraram " << sobra;
	}
	
}