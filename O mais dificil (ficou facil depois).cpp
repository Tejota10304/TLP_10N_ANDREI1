#include <iostream>
using namespace std;

void main()
{
	int total = 5, somalturas = 0;
	float altura[5], alturamedia;
	int idade[5], cotador = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Qual idade?\n";
		cin >> idade[i];
		cout << "Qual a altura em metros\n";
		cin >> altura[i];
	}
	for (int i = 0; i < total; i++)
 {
		somalturas += altura[i];
	}
	alturamedia = somalturas / total;
		for (int i = 0; i < 5; i++)
		{
			if (altura[i] >= alturamedia)
			{
				cotador++;
			}
			if (idade[i] < 13)
			{
				cotador--;
			}
		}
		cout << cotador << " Alunos tem altura menor do que a media "<<"\n";
}