#include <iostream>
#include <time.h>
using namespace std;

int deposito(int saldo)
{ 
	srand(time(0));
	int valor = 0, valordepositado;
	string array[3] = { "Uauuu calma calabresoo rico","calma voce pode ser preso","Cuidado para nao afundares o banco com tanto dinheiro" };
	cout << "Quanto deseja depositar: ";
	cin >> valor;
	if (valor >= 2000)
	{
		cout << array[rand() % 3]<<"\n";
	}
	if(true)
	{
		valordepositado = saldo + valor;
		return valordepositado;
	}
}
void VerSaldo(int saldo)
{
	cout << "Seu saldo atualmente e de " << saldo<<" Bitcoin \n";
}
int levantar(int saldo)
{
	int valorlevantado, valor = 0;
	cout << "Quanto deseja levantar: ";
	cin >> valorlevantado;
	if (valorlevantado > saldo)
	{
		cout << "Falha ao tentar levantar \nSeu saldo e de apenas "<<saldo<<"\n";
		return saldo;
	}
	else
	{
		valor = saldo - valorlevantado;
		return valor;
	}
}
int enviar(int saldo)
{
	int numero, valor = 0, valorEnviado = 0;
	cout << "Numero do destinatario: ";
	cin >> numero;
	cout << "Qual o valor que deseja enviar: ";
	cin >> valor;
	cout << "Processando...\n";
	if (valor > saldo)
	{
		cout << "Desculpe Erro... saldo insuficiente\n";
		valorEnviado = saldo;
	}
	else
	{
		valorEnviado = saldo - valor;
	}

	return valorEnviado;
}

void iniciar()
{
	int MENU, saldo = 1000;
	cout << "Seja Bem vindo ao nosso BankBitcoin \n";
	do
	{
		cout << "Pressione um numero de 1 a 4\n 1-Deposito:\n 2-Levantar\n 3-Ver saldo\n 4-Manda Bitcoin ";
		cin >> MENU;
		switch (MENU)
		{
		case 1:
		{
			saldo = deposito(saldo);
			break;
		}
		case 2:
		{
			saldo = levantar(saldo);
			break;
		}
		case 3:
		{
			VerSaldo(saldo);
			break;
		}
		case 4:
		{
			saldo = enviar(saldo);
			break;
		}
		}
	} while (true);
	
}
void main()
{
	iniciar();
}