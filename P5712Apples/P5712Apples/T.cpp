#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x == 0)
	{
		cout << "Today, I ate 0 apple." << endl;
	}
	else if (x==1)
	{
		cout << "Today, I ate 1 apple." << endl;
	}
	else
	{
		printf("Today, I ate %d apples.\n", x);
	}
	return 0;
}