#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	int testCase, n;
	cin >> testCase;
	for (int tc = 0; tc < testCase; tc++)
	{
		cin >> n;
		long long int S = 0, Schan = 0, Sle = 0, Sbinh = 0, Slap = 0;
		for (int i = 1; i <= n; i++)
		{
			S += i;
			Schan += 2 * i;
			Sle += 2 * i - 1;
			Sbinh += pow(i, 2);
			Slap += pow(i, 3);
		}
		cout << S << " " << Schan << " " << Sle << " " << Sbinh << " " << Slap << endl;
	}
	return 0;
}