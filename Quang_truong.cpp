#include<iostream>
using namespace std;
int main()
{
	long long n, m, a, res, height, width;
	cin >> n >> m >> a;
	height = n / a;
	width = m / a;
	if (n % a != 0) height += 1;
	if (m % a != 0) width += 1;
	res = height * width;
	cout << res << endl;
	return 0;
}