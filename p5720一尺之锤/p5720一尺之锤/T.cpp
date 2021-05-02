#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int cnt = 1;
	while (x > 1)
	{
		cnt++;
		x /= 2;
	}
	cout << cnt << endl;
	return 0;
}