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
		cout << "A mais pessoas do que bolo\n ";
	}
	else {
		resultado = bolo / pessoas;
		sobra = bolo % pessoas;
		cout << "Cada pessoas recebera " << resultado<<"\n;
		cout << "Sobraram " << sobra;
	}
	
}
