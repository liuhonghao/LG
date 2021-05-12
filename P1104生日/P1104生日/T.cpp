#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

struct student
{
	string name;
	int year;
	int month; 
	int day;
	int idx;

	bool operator< (student tmp)const{
		if (year != tmp.year) return year<tmp.year;
		if (month != tmp.month) return month<tmp.month;
		if (day != tmp.day) return day<tmp.day;
	}
}a[105];

bool cmp(student a, student b)
{
	if (a.year != b.year)
	{
		return a.year < b.year;
	}
	else
	{
		if (a.month != b.month)
		{
			return a.month < b.month;
		}
		else if (a.day == b.day && a.month == b.month) return a.idx>b.idx;
		else if (a.day != b.day && a.month == b.month) return a.day < b.day;
	}
}
int n;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].name >> a[i].year >> a[i].month >> a[i].day;
		a[i].idx = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i].name << endl;
	}
	return 0;
}