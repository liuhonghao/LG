#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int q[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> q[i];
	sort(q, q + n);
	cout << q[0] << endl;
	return 0;
}