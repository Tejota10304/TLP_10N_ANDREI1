#include <iostream>
using namespace std;

void main()
{
	char abc[5] = { 'a','e','i','o','u' };
	char ppp[1] = {'p'};
	char frase[100];
	int letras,somar=0;
	cout << "Quantas letras tem sua frase ";
	cin >> letras;
	cout << "Me de a frase ";
	for (int i = 0; i < letras; i++)
	{
		cin >> frase[i];
	}
	for (int i = 0; i < letras; i++)
	{
		cout << frase[i];
		for (int j = 0; j < 5; j++)
		{
			if (frase[i] == abc[j])
			{
				cout<<frase[i]<<"p";
			}
		}
	}
}
