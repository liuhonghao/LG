#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

const int N = 110 + 10;
int n;
int a[N];

bool isprime(int n)
{
	if (n == 1)return false;
	for (int i = 2; i <= n / i; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		if (isprime(a[i]))
		{
			cout << a[i] << ' ';
		}
	}
	return 0;
}