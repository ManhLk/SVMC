#include<iostream>
using namespace std;
int main()
{
	long test, x;
	cin >> test;
	while (test > 0)
	{
		cin >> x;
		while (x > 9)
		{
			int index = -1, A[20];
			while (x > 0)
			{
				A[++index] = x % 10;
				x /= 10;
			}
			for (int i = index; i >= 0; i--)
			{
				x += A[i];
			}
		}
		cout << x << endl;
		test--;
	}
	return 0;
}