#include<iostream>
#include<string>
using namespace std;
int n, N, index, B[100005];
string s, A[100005];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		index = -1;
		B[i] = 1;
		bool check = false;
		while (A[++index] != "")
		{
			if (A[index] == s) 
			{ 
				B[index] += 1; 
				check = true; 
				break; 
			}
		}
		if (!check) 
		{ 
			A[index] = s; 
			N = index; 
		}
	}
	bool checkLe = false;
	for (int i = 0; i <=N ; i++)
	{
		if (B[i] % 2 != 0) 
		{ 
			s = A[i]; 
			checkLe = true; 
			break; 
		}
	}
	if (checkLe) cout << s;
	else cout << "-1";
	return 0;
}