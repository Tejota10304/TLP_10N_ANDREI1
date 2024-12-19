#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void main()
{
	srand(time(0));
	string muie[5] = { "Eduarda","Duda","Mariana","Jade","Camilla" },
		lugar[5] = { "Sorveteria","Restaurante","Parque","Trilha"," Montanha" };
	cout << muie[rand() % 5]<<" Vai encontra com voce na ";
	cout << lugar[rand() % 5];
}