#include<iostream>
using namespace std;
int main()
{
	int n, k, max = 0, min = 0;
	cin >> n >> k;
	if (k % (n - 1) != 0) min = max = k + k / (n - 1);
	else
	{
		int t = k / (n - 1);
		min = k + t - 1;
		max = k + t;
	}
	cout << min << " " << max;
	return 0;
}