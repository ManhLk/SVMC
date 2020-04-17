#include<iostream>
using namespace std;
long n, s, A[25], res = 20, cnt, sum;
void quickSort(int l, int r)
{
	long pivot = A[(l + r) / 2];
	int i = l;
	int j = r;
	while (i <= j)
	{
		while (A[i] < pivot) i++;
		while (A[j] > pivot)j--;
		if (i <= j)
		{
			long tmpt = A[i];
			A[i] = A[j];
			A[j] = tmpt;
			i++; j--;
		}
	}
	if (l < j) quickSort(l, j);
	if (r > i) quickSort(i, r);
}
void Try(int i)
{
	cnt++;
	sum += A[i];
	if (sum == s)
	{
		if (res > cnt) res = cnt;
		return;
	}
	else
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (sum + A[j] <= s) Try(j);
		}
	}
	sum -= A[i];
	cnt--;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	A[n] = 2000000009;
	quickSort(0, n - 1);
	for (int i = n - 1; i > 0; i--)
	{
		if (A[i] == A[i + 1]) continue;
		cnt = sum = 0;
		Try(i);
	}
	if (res == 20) cout << "-1";
	else cout << res;
	return 0;
}