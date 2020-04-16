#include<iostream>
using namespace std;
int n, m;
int A[255][255];
int visited[255];
bool checkBoHu()
{
	for (int i = 0; i < n; i++)
	{
		if (visited[i] == 0) return true;
	}
	return false;
}
void Try(int i)
{
	visited[i] = 1;
	for (int j = 0; j < n; j++)
	{
		if (A[i][j] == 1)
		{
			A[i][j] = A[j][i] = 0;
			Try(j);
		}
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	int c1, c2;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		visited[i] = 0;
		for (int j = 0; j < n; j++)
		{
			A[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> c1 >> c2;
		c1--; c2--;
		A[c1][c2] = A[c2][c1] = 1;
	}
	Try(0);
	if (!checkBoHu()) cout << "0";
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (visited[i] == 0) cout << (i + 1) << endl;
		}
	}
	return 0;
}