#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	int testCase, r, c, s, ss;
	cin >> testCase;
	for (int tc = 0; tc < testCase; tc++)
	{
		cin >> r >> c >> s;
		ss = s * 2;
		int row = ss * r;
		int column = ss * c;
		int indexr, indexc;
		for (int i = 0; i < row; i++)
		{
			indexr = i % ss;
			for (int j = 0; j < column; j++)
			{
				indexc = j % ss;
				if ((indexr < s && indexc < s) || (indexr >= s && indexc >= s))
				{
					if ((indexr + indexc == (s - 1)) || (indexr + indexc == (ss - 1 + s)))
						cout << "/";
					else cout << ".";
				}
				else
				{
					if ((indexr-indexc)==s||(indexc-indexr)==s) cout << "\\";
					else cout << ".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}