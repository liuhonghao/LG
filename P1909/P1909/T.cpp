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
			if (n % a[i] != 0)//���������Ҫ��Ǧ�����i�����Ǳ���,�������Ҫ�������ȥ��1��
			{
				c[i] = b[i] * (n / a[i] + 1);//Ǯ*����
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