#include<iostream>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	int x, y, a, b, res=0;
	cin >> x >> y >> a >> b;
	if (a <= b) a = b + 1; 
	if (a > x) cout << "0" << endl;
	else
	{
		int q;
		for (int i = a; i <= x; i++)
		{
			if (y < i) q = y + 1;
			else q = i;
			for (int j = b; j < q; j++)
			{
				res += 1;
			}
		}
		cout << res << endl;
		for (int i = a; i <= x; i++)
		{
			if (y < i) q = y + 1;
			else q = i;
			for (int j = b; j < q; j++)
			{
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}