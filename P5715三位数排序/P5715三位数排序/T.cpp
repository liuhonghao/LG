#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int res[3];
	cin >> res[0] >> res[1] >> res[2];
	sort(res, res + 3);
	cout << res[0] << ' ' << res[1] << ' ' << res[2] << endl;
	return 0;
}