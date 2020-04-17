/*
Ví dụ n=5 1 3 5 2 4
Duyệt từ phần từ n xem có ở đáy ko, nếu ko đảo lên trên (bằng cách res+1 )
Nếu có duyệt phần tử kề trên và làm như trên
*/
#include<iostream>
using namespace std;
long n, A[300005];
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
	long book = n, res = 0;
	for (int i = n; i > 0; i--)
	{
		if (A[i] == book) book--;
		else res += 1;
	}
	cout << res;
	return 0;
}