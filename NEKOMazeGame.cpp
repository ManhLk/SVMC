#include<iostream>
using namespace std;
int n, q, bad;
bool A[2][100005];
void slove(int r, int c)
{
	A[r][c] = !A[r][c];
	int rr = (r + 1) % 2;
	for (int i = c - 1; i < c + 2; i++)
	{
		if (A[rr][i])
		{
			if (A[r][c]) bad++;
			else bad--;
		}
	}
	if (bad == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	int r, c;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		A[0][i] = A[1][i] = false;
	}
	cin >> r >> c;
	A[r - 1][c - 1] = true; 
	cout << "Yes" << endl;
	bad = 0;
	for (int i = 1; i < q; i++)
	{
		cin >> r >> c;
		r -= 1; c -= 1;
		slove(r, c);
	}
	return 0;
}