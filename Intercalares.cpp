#include <iostream>
using namespace std;

void main()
{
	int batata[10], batataI[10], total[20], pos = 0, contar = 0, posicao;
	for (int i = 0; i < 10; i++)
	{
		cout << "Me de " << i + 1 << " Numero\n";
		cin >> batataI[i];
		cout << "Me de " << i + 1 << " Numero\n";
		cin >> batata[i];
	}
	for (int i = 0; i < 20; i++)
	{
		total[i] = batata[pos];
		i = i + 1;
		total[i] = batataI[pos];
		pos = pos + 1;
	}
	for (int i = 0; i < 20; i++)
	{
		cout << total[i]<<" ";
	}
	for (int i = 0; i < 20; i++)
	{
		if (total[i] > contar)
		{
			contar = total[i];
			posicao = i;
		}
	}
	cout <<"\n"<< "O numero maior e o " << contar << " E esta na posicao " << posicao;
}
