#define _CRT_SECURE_NO_WARNINGS 1

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110;
//int n;
//int q[N];
//int res;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> q[i];
//	for (int i = 0, j = i + 1; i < n,i<j; i++)
//	{
//		if (q[i] == q[j])
//		{
//			q[i] = 0x3f;
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (q[i]!=0x3f)
//		{
//			res++;
//		}
//	}
//	sort(q, q + res);
//	for (int i = 0; i < res; i++)
//	{
//		cout << q[i] << ' ';
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
set<int>s;
int a[105];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
		s.insert(a[i]);
	}
	cout << s.size() << endl;
	while (!s.empty())
	{
		cout << *s.begin() << " ";           //注意此处的用法
		s.erase(s.begin());
	}
	return 0;
}