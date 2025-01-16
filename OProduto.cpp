#include <iostream>
using namespace std;
int global[100][100];
string produto[5] = { "Batata","Cenoura","Couves","alface","Brocolos" };
string Meses[3] = { "Janeiro","Fevereiro","Março" };
void funcoes()
{
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Quantos(a) " << produto[i] << " voce comeu em " << Meses[j];
			cin >> global[j][i];
		}
	}
}
int verify1()
{
	int resultado=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5    ; j++)
		{
			resultado = global[i][j] + resultado;
		}
	}
	return resultado;
}
int verify2()
{
	
	for (int i = 0; i < 3; i++)
	{
		int resultado = 0;
		for (int j = 0; j < 5; j++)
		{
			resultado = global[i][j] + resultado;	
		}
		cout << "no mes de " << Meses[i] << " voce comeu " << resultado << "\n";
	}
	return 0; 
}
void main()
{
	int escolha = 0, bata = 0, resultado=0;
	do
	{
		cout << " 0-Sair\n 1-calcular mensais\n 2-Calcula totais por produto\n 3-inserir valores\n ";
		cout << "Oque voce quer fazer : ";
		cin >> escolha;
		switch (escolha)
		{
		case 1:
		{
			cout << "Em todo o ano voce comeu " << verify1() << " Produtos ";
			break;
		}
		case 2:
		{
			verify2();
			break;
		}
		case 3:
		{
			funcoes();
		}
		default: 0;
			break;
		}
	} while (escolha = 1 && 2);
}