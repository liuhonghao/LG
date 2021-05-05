#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 1e4 + 10;
//bool st[N];
//int res;
//int main()
//{
//	int l, n;
//	cin >> l >> n;
//	memset(st, true, sizeof(st));
//	while (n--)
//	{
//		int a, b;
//		cin >> a >> b;
//		for (int i = a; i <= b; i++)
//			st[i] = false;
//	}
//	for (int i = 0; i <= l; i++)
//	{
//		res += st[i];
//	}
//	cout << res << endl;
//	return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;
const int N = 1e4 + 10;

bool st[N];

int main()
{
	int l, n;
	cin >> l >> n;
	memset(st, true, sizeof st);
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) st[i] = false;
	}
	int res = 0;
	for (int i = 0; i <= l; i++)
		res += st[i];
	cout << res << endl;;
	return 0;
}