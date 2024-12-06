#include <iostream>
using namespace std;

void main()
{
	char abc[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z' };
	char frase[100];
	int chave, letras, posicao = 0, alfa1[26] = {0};
	cout << "Quantas letras tem sua frase ";
	cin >> letras;
	cout << "Qual a chave de deslocamento ";
	cin >> chave;
	cout << "Me de a frase ";
	for (int i = 0; i < letras; i++)
	{
		cin >> frase[i];
	}
		for (int i = 0; i < letras; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (frase[i] >= 'z')
				{
					if (frase[i] == abc[j])
					{
						posicao = (j + chave) % 25;
						frase[i] = abc[posicao];
					}
				}
				else
				{
					if (frase[i] == abc[j])
					{
						j = j + chave;
						frase[i] = +abc[j];
					}
				}
			}
			cout << frase[i]<<" ";
		}
	
}