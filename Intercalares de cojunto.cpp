#include<iostream>
using namespace std;

void main()
{
	int A[10], B[10], C[20];
	cout << "Me de um conjuto de 10 numeros ";
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << "Me me outro conjuto de 10 Numeros ";
	for (int i = 0; i < 10; i++)
	{
		cin >> B[i];
	}
	for (int i = 0; i < 10; i++)
	{
		C[i * 2] = A[i];
		C[i * 2 + 1] = B[i];
	}
		for (int i = 0; i < 20; i++)
		{
			cout << C[i];
		}
	}
