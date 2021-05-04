#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;

int main()
{
	int arr[N];
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}