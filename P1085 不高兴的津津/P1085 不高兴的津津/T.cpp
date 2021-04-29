#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int a, b, sum, date;
int main()
{
	for (int i = 1; i < 8; i++)
	{
		cin >> a >> b;
		if ((a + b>sum) && (a + b > 8))
		{
			sum = a + b;
			date = i;
		}
	}
	cout << date << endl;
	return 0;
}