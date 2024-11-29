#include <iostream>
using namespace std;

void main()
{
	char palavra[4], palavra2[4];
	int letras, contar = 0;
	cout << "Quantas letras tem suas 2 palavras ";
	cin >> letras;
	cout << "me de uma palavra \n ";
	for (int i = 0; i < letras; i++)
	{
		cin >> palavra[i];
	}
	cout << "me de a 2 palavra\n ";
	for (int i = 0; i < letras; i++)
	{
		cin >> palavra2[i];
	}
	for (int i = 0; i < letras; i++)
	{
		for (int j = 0; j < letras; j++)
		{
			if (palavra[i] == palavra2[j])
			{
				contar++;
			}
		}
	}
	if (contar == letras)
	{
		cout << "e um anagrama";
	}
	else
	{
		cout << "Nao e um anagrama";
	}
}
