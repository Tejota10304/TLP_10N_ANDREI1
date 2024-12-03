#include <iostream>
using namespace std;

void main()
{
	char palavra[100], palavra2[100], alfa1[26] = { 0 }, alfa2[26] = {0};
	char abc[26]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','t','u','v','w','x','y','z'};
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
		for (int j = 0; j < 26; j++)
		{
			if (palavra[i] == abc[j])
			{
				alfa1[j]++;
			}
			
		}
	}
	for (int i = 0; i < letras; i++)
	{ 
		for (int j = 0; j <26 ; j++)
		{
			if (palavra2[i] == abc[j])
				{
				alfa2[j]++;
				}
		}
	}
		for (int i = 0; i < 26; i++)
		{
			if (alfa1[i] != alfa2[i])
			{
				contar = 1;
			}
		}
	if (contar == 0)
	{
		cout << "E um anagrama";
	}
	else
	{
		cout << "Nao e ";
	}
}