#include<iostream>
#include<string>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	string s;
	int stack[1000];
	int top = -1;
	int x;
	while (true)
	{
		cin >> s;
		if (s == "end") break;
		if (s == "init") top = -1;
		else if (s == "push")
		{
			cin >> x;
			stack[++top] = x;
		}
		else if (s == "pop")
		{
			if (top != -1) top -= 1;
		}
		else if (s == "top")
		{
			if (top == -1) cout << "-1" << endl;
			else cout << stack[top] << endl;
		}
		else if (s == "size") cout << (top + 1) << endl;
		else
		{
			if (top == -1) cout << "1" << endl;
			else cout << "0" << endl;
		}
	}
	return 0;
}