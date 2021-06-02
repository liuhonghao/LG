#define _CRT_SECURE_NO_WARNINGS 1

# include <bits/stdc++.h>
const int MAX = 5050;
using namespace std;
int a[MAX];
int f(int n)
{
	if (a[n] != -1) return a[n];
	else
	{
		a[n] = f(n - 1) + f(n - 2);
		return a[n];
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= MAX - 1; i++)
	{//³õÊ¼»¯ 
		a[i] = -1;
	}
	a[0] = 1; a[1] = 1;
	cout << f(n) << endl;
	return 0;
}