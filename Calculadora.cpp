#include <iostream>
using namespace std;

void main()
{
	char op;
	int numb1, numb2;
	int Resultado;

	cout << "Qual o primeiro numero\n";
	cin >> numb1;
	cout << "Qual operacao deseja fazer [ + , - , / , * ]\n";
	cin >> op;
	cout << "Qual o segundo numero\n";
	cin >> numb2;

	switch (op)
	{
	case '+':
		Resultado= numb1  + numb2;
		cout << "O seu resultado e " << Resultado;
		
	case '-':
		Resultado = numb1 - numb2;
		cout << "O seu resultado e " << Resultado;

	case '/':
		Resultado = numb1 / numb2;
		cout << "O seu resultado e " << Resultado;

	case '*':
		Resultado = numb1 * numb2;
		cout << "O seu resultado e " << Resultado;
	default:
		break;
	}
	}

