#include<iostream>
using namespace std;
int n, h[5005], m[5005], s[5005], A[5005];
void swap(int arr[5005],int i,int j)
{
	int tmpt = arr[i];
	arr[i] = arr[j];
	arr[j] = tmpt;
}
void quickSort(int l, int r)
{
	int pivot = A[(l + r) / 2];
	int i = l;
	int j = r;
	while (i <= j)
	{
		while (A[i] < pivot) i++;
		while (A[j] > pivot)j--;
		if (i <= j)
		{
			swap(A, i, j);
			swap(h, i, j);
			swap(m, i, j);
			swap(s, i, j);
			i++; j--;
		}
	}
	if (l < j) quickSort(l, j);
	if (r > i) quickSort(i, r);
}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i] >> m[i] >> s[i];
		A[i] = h[i] * 3600 + m[i] * 60 + s[i];
	}
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << h[i] << " " << m[i] << " " << s[i] << endl;
	}
	return 0;
}