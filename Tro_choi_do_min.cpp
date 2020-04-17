#include<iostream>
using namespace std;
int X[8] = { 0,-1,0,1,-1,-1,1,1 };
int Y[8] = { -1,0,1,0,-1,1,1,-1 };
int main()
{
	//freopen("input.txt", "r", stdin);
	int n, m;
	while (true)
	{
		cin >> n >> m;
		if (m == 0 && n == 0) break;
		char A[105][105];
		int B[105][105];
		for (int i = 0; i < m + 2; i++)
		{
			A[0][i] = '.';
			A[n + 1][i] = '.';
		}
		for (int i = 1; i <= n; i++)
		{
			A[i][0] = A[i][m + 1] = '.';
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> A[i][j];
				B[i][j] = -1;
			}
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (A[i][j] == '.')
				{
					int count = 0;
					for (int direct = 0; direct < 8; direct++)
					{
						int u = i + X[direct];
						int v = j + Y[direct];
						if (A[u][v] == '*') count++;
					}
					B[i][j] = count;
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (B[i][j] == -1) cout << "*";
				else cout << B[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}