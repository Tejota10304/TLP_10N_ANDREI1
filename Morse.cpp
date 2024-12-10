#include <iostream>
#include <string>
using namespace std;

void main()
{
	int tamanho1, posicao = 0;
	char traduzir;
	string frase[100], morseT[100];
	string abc[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r","s", "t", "u", "v", "w", "x", "y", "z"};
	string morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	cout << "Quer traduzir do Morse para Portugues 'M' Portugues para Morse 'P'";
	cin >> traduzir;
	switch (traduzir)
	{
	case 'm':
		cout << "Qual o tamanho da frase ";
		cin >> tamanho1;
		cout << "Qual a frase ";
		for (int i = 0; i < tamanho1; i++)
		{
			cin >> frase[i];
		}
		for (int i = 0; i < tamanho1; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (frase[i] == abc[j])
				{
					cout << morse[j];
				}
			}
			
	   }
	case 'p':
		cout << "Qual o tamanho da frase ";
		cin >> tamanho1;
		cout << "Qual a frase ";
		for (int i = 0; i < tamanho1; i++)
		{
			cin >> morseT[i];
		}
		for (int i = 0; i < tamanho1; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (morseT[i] == morse[j])
				{
					cout << abc[j]<<" ";
				}
			}

		}

	default:
		break;
	}
}
