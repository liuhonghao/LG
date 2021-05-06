#define _CRT_SECURE_NO_WARNINGS 1

/*#include <bits/stdc++.h>
using namespace std;

int num[10];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		for (int temp = i; temp; temp /= 10)
		{
			num[temp % 10]++;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << num[i] << ' ';
	}
	return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int js[N];
int n, m;
int main()
{
	cin >> n >> m;
	for (int i = n; i <= m; i++)
	{
		int j = i;
		while (j > 0)
		{
			js[j % 10]++;

			j /= 10;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << js[i] << ' ';
	}
	return 0;
}