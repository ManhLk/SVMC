#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int testCase, r, c, h, w;
	cin >> testCase;
	for (int tc = 0; tc < testCase; tc++)
	{
		cin >> r >> c >> h >> w;
		int row = ((h + 2) - 1) * r + 1;
		int column = ((w + 2) - 1) * c + 1;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (i % (h + 1) == 0 || j % (w + 1) == 0) cout << "*";
				else cout << ".";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}