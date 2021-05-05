#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

bool isLeapYear(int x)
{
	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
const int N = 3005;
int res[N];
int main()
{
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	for (int i = l; i <= r; i++)
	{
		if (isLeapYear(i))
		{
			res[cnt++] = i;
		}
	}
	cout << cnt << endl;
	for (int i = 0; i <= N; i++)
	{
		if (res[i] != 0)
		{
			cout << res[i] << ' ';
		}
	}
	return 0;
}