#include<iostream>
#include<string>
using namespace std;
string s;
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> s;
	char SS[100];
	int top = -1, cnt = 0;
	int len = s.length();
	for (int i = len - 1; i > 0; i--)
	{
		SS[++top] = s[i];
		cnt++;
		if (cnt % 3 == 0) SS[++top] = ',';
	}
	SS[++top] = s[0];
	for (int i = top; i >= 0; i--)
	{
		cout << SS[i];
	}
	return 0;
}