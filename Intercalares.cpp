#include <iostream>
using namespace std;

void main()
{
	int batata[10], batataI[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Me de " << i + 1 << " Numero\n";
		cin >> batataI[i];
		cout << "Me de " << i + 1 << " Numero\n";
		cin >> batata[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << batataI[i];
		cout << batata[i];
	}
}
