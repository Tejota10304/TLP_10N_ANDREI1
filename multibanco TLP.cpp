#include <iostream>
using namespace std;

void main()
{
	int Escolha, Saldo = 15, Depositar, Levantar;

	cout << "1-Depositar\n";
	cout << "2-Leventar\n";
	cout << "3-Sair\n";
	cout << "Oque deseja fazer ? ";
	cin >> Escolha;
	while(true)
	{
		if (Escolha == 1)
		{
			cout << "Seu saldo e de > " << Saldo << "\n";
			cout << "Quanto deseja Depositar ? ";
			cin >> Depositar;
			Saldo = Saldo + Depositar;
			cout << "Agora seu saldo e de > " << Saldo << "\n";
		}
		else if (Escolha == 2)
		{
			cout << "Seu saldo e de > " << Saldo << "\n";
			cout << "Quanto deseja Levantar ? ";
			cin >> Levantar;
			if (Levantar <= Saldo)
			{
				Saldo = Saldo - Levantar;
				cout << "Seu saldo agora e de > " << Saldo << "\n";
			}
			else {
				cout << "SALDO INSUFICIENTE\n";
			}
		}
		else if (Escolha == 3)
		{
			break;
		}
		else
		{
			cout << "Numero Invalido";
			break;
		}
	}
	
	
}
