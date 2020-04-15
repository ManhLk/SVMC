#include<iostream>
using namespace std;
int n, A[100005];
int main()
{
	//freopen("input.txt", "r", stdin);
	int Ti = 1, Teo = 1, timeTi = 0, timeTeo = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	if (n == 1) Teo = 0;
	else
	{
		int front = 0, rear = n - 1;
		timeTi = A[front];
		timeTeo = A[rear];
		n -= 2;
		while (n != 0)
		{
			if (timeTeo < timeTi)
			{
				timeTeo += A[--rear];
				Teo++;
			}
			else
			{
				timeTi += A[++front];
				Ti++;
			}
			n--;
		}
	}
	cout << Ti << " " << Teo;
	return 0;
}