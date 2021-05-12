#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 1001;
int n;

int a[N];
bool vis[N];
int main()
{
	cin >> n;
	cin >> a[1];
	for (int i = 2; i <= n; i++)
	{
		cin >> a[i];
		int df = abs(a[i] - a[i - 1]);
		if (df > n - 1 || vis[df])
		{
			cout << "Not jolly" << endl;
			return 0;
		}
		vis[df] = true;
	}
	cout << "Jolly" << endl;
	return 0;
}
