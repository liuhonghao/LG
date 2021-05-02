#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

int a, b;
int x, y, n, m;
int main()
{
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		if (i%a == 0)
			x += i, n++;
		else
			y += i, m++;
	}
	double w = (x*1.0) / n, v = (y*1.0) / m;
	printf("%.1f %.1f\n", w, v);
	return 0;
}