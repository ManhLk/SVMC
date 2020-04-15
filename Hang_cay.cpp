#include<iostream>
#include<string>
using namespace std;
int n;
string s;
string A[25];
void slove(string s, int index)
{
	int current = 0;
	while (s[current] == '0')
	{
		current++;
	}
	s = s.substr(current);
	A[index] = s;
}
bool lessThan(string s1, string s2)
{
	int lenS1 = s1.length();
	int lenS2 = s2.length();
	if (lenS1 < lenS2) return true;
	if (lenS1 > lenS2) return false;
	if (s1 == s2) return false;
	for (int i = 0; i < lenS1; i++)
	{
		if (s1[i] > s2[i]) return false;
	}
	return true;
}
int main()
{
	int tc = 0;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			slove(s, i);
		}
		string min = A[0];
		string max = A[0];
		for (int i = 1; i < n; i++)
		{
			if (lessThan(max, A[i])) max = A[i];
			if (lessThan(A[i], min)) min = A[i];
		}
		tc++;
		if (min == max) cout <<"Case " <<tc<<": "<<"There is a row of trees having equal height." << endl;
		else cout << "Case " << tc << ": " << min << " " << max << endl;
	}
	return 0;
}