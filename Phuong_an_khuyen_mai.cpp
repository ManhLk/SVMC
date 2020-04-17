#include<iostream>
using namespace std;
int testCase, n, m, k;
int cntN, cntM, cntK;
bool checkPalindrome(int A[6])
{
	for (int i = 0; i < 3; i++)
	{
		if (A[i] != A[5 - i]) return false;
	}
	return true;
}
bool checkcntN(int A[6])
{
	for (int i = 0; i < 6; i++)
	{
		if (A[i] == 0) return false;
	}
	return true;
}
void count()
{
	int x, index, sum, A[6];
	for (int i = 100000; i < 1000000; i++)
	{
		x = i; index = -1; sum = 0;
		while (x > 0)
		{
			A[++index] = x % 10;
			sum += A[index];
			x /= 10;
		}
		if (checkPalindrome(A))
		{
			cntK += 1;
			if (sum % 10 == 0)
			{
				cntM += 1;
				if (checkcntN(A)) cntN += 1;
			}
		}
		
	}
}
bool checkNMK()
{
	int dN = cntN, dM = cntM, dK = cntK;
	if (n > dN) return false;
	dM -= n;
	if (m > dM) return false;
	dK = dK - n - m;
	if (k > dK) return false;
	return true;
}

int main()
{
	cntN = cntM = cntK = 0;
	count();
	//freopen("input.txt", "r", stdin);
	cin >> testCase;
	for (int tc = 0; tc < testCase; tc++)
	{
		cin >> n >> m >> k;
		if (checkNMK()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}