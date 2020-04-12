#include<iostream>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	string s;
	cin >> s;
	int SS[10001];
	int top = -1, sum = 0;
	int len = s.length();
	long res = 0;
	for (int i = 0; i < len; i++)
	{
		switch (s[i])
		{
		case '(':
			SS[++top] = -1; break;
		case 'C':
			SS[++top] = 12; break;
		case 'H':
			SS[++top] = 1; break;
		case 'O':
			SS[++top] = 16; break;
		case ')':
			sum = 0;
			while (SS[top] != -1)
			{
				sum += SS[top--];
			}
			SS[top] = sum; break;
		default:
			SS[top] = SS[top] * ((int)s[i] - 48); break;
		}
	}
	for (int i = 0; i <= top; i++)
	{
		res += SS[i];
	}
	cout << res;
	return 0;
}