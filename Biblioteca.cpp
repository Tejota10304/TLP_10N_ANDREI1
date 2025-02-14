#include <iostream>
using namespace std;

void main()
{
	long long Numero;
	int NumbBooks[100], Soma = 0, resto = 0, final = 0;

	cin >>Numero;

	for (int i = 12; i >= 0; i--) {
		NumbBooks[i] = Numero % 10;
		Numero = Numero / 10;
	}
	for (int i = 0; i < 12; i++)
	{
		if (i % 2 == 0)
		{
			Soma += NumbBooks[i] * 1;
		}
		else
		{
			Soma += NumbBooks[i] * 3;
		}
	}
	resto = Soma % 10;
	final = (resto == 0) ? 0 : (10 - resto);
	if (final == NumbBooks[12])
	{
		cout << "Ok";
	}
	else
	{
		cout << "ERRO " << final;
	}
}	