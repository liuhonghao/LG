#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int k, s = 0, d;
	cin >> k;
	d = k; 
	for (int i = 1; i <= d; i++)
	{
		if (k > 1)
		{
			s = s + i*i;
			k = k-i;
		}
		else
		{
			s + i*k;
			break;
		}
	}
	cout << s << endl;
	return 0;
}
