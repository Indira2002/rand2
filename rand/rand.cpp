#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Fill(int m[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = rand();
		}
	}
       return m[10][10];
}
	
int main()
{

	srand(time(0));
	int Matrixa[10][10];
	Fill(Matrixa);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrixa[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Matrixa[i][j] % 2 == 0)
			{
				cout << 0 << endl;
			}
			else cout << Matrixa[i][j] << endl;
		}
		return 0;
	}
}

