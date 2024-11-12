#include <iostream>
using namespace std;

void main()
{
	int N1;
	cout << "-----It's The final CountDown-----\n";
	do
	{
		cout << "Me de um numero impar ";
		cin >> N1;
	} while(N1 < 0 || N1>100);
		for (int i = N1; i > 0; i--)
		{
			if (i % 2 != 0)
			{
				cout << i<<"\n";
			}
		}
}