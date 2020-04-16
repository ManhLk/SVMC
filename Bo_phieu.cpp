#include <iostream>
#include <string>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	string s;
	int n;
	while (true)
	{
		cin >> s;
		if (s == "#") break;
		n = s.length();
		int A[100];
		A[89] = A[78] = A[80] = A[65] = 0;
		for (int i = 0; i < n; i++)
		{
			A[s[i]] += 1;
		}
		if (2 * A[65] >= n) cout << "need quorum" << endl;
		else if (A[89] > A[78]) cout << "yes" << endl;
		else if (A[89] < A[78]) cout << "no" << endl;
		else cout << "tie" << endl;
	}
	return 0;
}