#include <iostream>
#include <string>
using namespace std;

void main()
{
	int CR;
	string carros[3] = { "Ferrari","Bugatti","BMW" };
	cout << "Voce possui 3 carros\n";
	cout << "Qual carro deseja ver, Me de um numero de 0 a 2: ";
	cin >> CR;
	cout << carros[CR];
}
