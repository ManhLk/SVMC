#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for (int tc = 0; tc < test; tc++)
	{
		int stt, A[8];
		char c[41];
		cin >> stt >> c;
		for (int i = 0; i < 8; i++)
		{
			A[i] = 0;
		}
		for (int i = 0; i < 38; i++)
		{
			if (c[i] == 'T' && c[i + 1] == 'T' && c[i + 2] == 'T') A[0]++;
			else if (c[i] == 'T' && c[i + 1] == 'T' && c[i + 2] == 'H') A[1]++;
			else if (c[i] == 'T' && c[i + 1] == 'H' && c[i + 2] == 'T') A[2]++;
			else if (c[i] == 'T' && c[i + 1] == 'H' && c[i + 2] == 'H') A[3]++;
			else if (c[i] == 'H' && c[i + 1] == 'T' && c[i + 2] == 'T') A[4]++;
			else if (c[i] == 'H' && c[i + 1] == 'T' && c[i + 2] == 'H') A[5]++;
			else if (c[i] == 'H' && c[i + 1] == 'H' && c[i + 2] == 'T') A[6]++;
			else A[7]++;
		}
		cout << stt << " ";
		for (int i = 0; i < 8; i++)
		{
			cout << A[i] << " ";
		}
		cout << endl;
	}
	return 0;
}