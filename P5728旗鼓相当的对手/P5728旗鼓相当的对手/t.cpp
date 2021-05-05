#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cmath>

using namespace std;

const int N = 1110;
int res[N][5];
int cnt;
int sum[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> res[i][1] >> res[i][2] >> res[i][3];
		sum[i] = res[i][1] + res[i][2] + res[i][3];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (abs(res[i][1] - res[j][1]) <= 5 &&
				abs(res[i][2] - res[j][2]) <= 5 &&
				abs(res[i][3] - res[j][3]) <= 5 &&
				abs(sum[i] - sum[j] <= 10))
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}