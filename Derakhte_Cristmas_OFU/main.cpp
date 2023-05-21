#include <iostream>

using namespace std;

int main()
{
	int i, j, k, l, N;
	cout << "Enter Space From Left (9<) :";
	cin >> N;
	cout << endl;
	int c = 3, tb;
	for (i = 1; i <= c; i++)
	{
		for (k = N - 1; k >= i; k--)
		{
			cout << " ";
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	c++;
	for (i = 1; i <= c; i++)
	{
		for (k = N - 2; k >= i; k--)
		{
			cout << " ";
		}
		for (j = 0; j <= 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	c++;
	for (i = 1; i <= c; i++)
	{
		for (k = N - 3; k >= i; k--)
		{
			cout << " ";
		}
		for (j = 0; j <= 2 * i + 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	c++;
	for (i = 1; i <= c; i++)
	{
		for (k = N - 4; k >= i; k--)
		{
			cout << " ";
		}
		for (j = 0; j <= 2 * i + 4; j++) {
			cout << "*";
		}
		cout << endl;
	}
	tb = 2 * i + 4;
	for (l = 0; l < 3; l++)
	{
		for (j = N - 3; j > 0; j--)
		{
			cout << " ";
		}
		for (j = 0; j <= 4; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < N - 9; i++)
	{
		cout << " ";
	}
	return 0;
}

