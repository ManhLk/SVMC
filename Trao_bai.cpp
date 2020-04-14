#include<iostream>
using namespace std;
int n, x;
struct linkList
{
	int front;
	int rear;
};
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> n >> x;
	int a, b;
	struct linkList node[100005];
	//Khoi tao danh sach lien ket
	for (int i = 1; i <= n; i++)
	{
		node[i].front = i - 1;
		node[i].rear = i + 1;
	}
	//Xu ly 
	for (int i= 0; i < x; i++)
	{
		cin >> a >> b;
		//Xoa node
		node[node[a].front].rear = node[a].rear;
		node[node[a].rear].front = node[a].front;
		//Chen node
		node[node[b].front].rear = a;
		node[a].front = node[b].front;
		node[a].rear = b;
		node[b].front = a;
	}
	int start, finish;
	for (int i = 1; i <= n; i++)
	{
		if (node[i].front == 0) start = i;
		if (node[i].rear == (n + 1)) finish = i;
	}
	while (start != node[finish].rear)
	{
		cout << start << " ";
		start = node[start].rear;
	}
	return 0;
}