#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>

using namespace std;

const int N = 110;
int a[N];
int res[N];
int main()
{
	int n; 
	cin >> n; 
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j >=1; j--)
		{
			if (a[j] < a[i])
			{
				res[i]++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << res[i] << ' ';
	}
	return  0;
}