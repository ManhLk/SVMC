#include<iostream>
using namespace std;
int main()
{
	for (int tc = 0; tc < 10; tc++)
	{
		int testCase, length = 99999, res = 0;
		cin >> testCase;
		int A[100][100];
		int X[3] = { 0,0,1 };
		int Y[3] = { 1,-1,0 };
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				cin >> A[i][j];
			}
		}
		for (int col = 0; col < 100; col++)
		{
			if (A[0][col] == 1)
			{
				int r = 0, c = col, cnt = 1;
				int visited[100][100] = { 0 };
				visited[r][c] = 1;
				while (r != 99)
				{
					for (int direct = 0; direct < 3; direct++)
					{
						int u = r + X[direct];
						int v = c + Y[direct];
						if (u >= 0 && u < 100 && v >= 0 && v < 100 && visited[u][v] == 0 && A[u][v] == 1)
						{
							cnt++;
							visited[u][v] = 1;
							r = u; c = v;
							break;
						}
					}
				}
				if (cnt <= length) { length = cnt; res = col; }
			}
		}
		cout <<"#" <<testCase << " " << res << endl;
	}
	return 0;
}