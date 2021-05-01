#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
int n, s;
int a[3];
int b[3];
int c[3];
int main()
{
	while (cin>>n)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i] >> b[i];
			if (n % a[i] != 0)//如果我所需要的铅笔与第i袋不是倍数,所以如果要买这个得去加1袋
			{
				c[i] = b[i] * (n / a[i] + 1);//钱*袋数
			}
			else
			{
				c[i] = b[i] * (n / a[i]);
			}
		}
		sort(c, c + 3);
		cout << c[0] << endl;
	}
	return 0;
}