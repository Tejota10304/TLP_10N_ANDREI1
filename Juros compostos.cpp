#include <iostream>
#include <cmath>
using namespace std;

void main()
{
	float capital, juros;
	int mes;
	cout << "Me de o valor do capital\n";
	cin >> capital;
	cout << "Me de o juros ao mes\n";
	cin >> juros;
	cout << "Quantos meses\n";
	cin >> mes;
	double capitalfinal = capital * pow((1 + juros/100), mes);
	cout << "voce tera em " << mes << " MESES " << capitalfinal;

}