#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main(){
	int num, f1, f2;
	scanf("%d", &num);
	f1 = (num % 2 == 0);
	f2 = (num>4 && num <= 12);

	if (f1 && f2)  //Ð¡A 
		printf("1 ");
	else
		printf("0 ");
	if (f1 || f2)  //Uim 
		printf("1 ");
	else
		printf("0 ");
	if (f1^f2)  //°ËÎ²ÓÂ 
		printf("1 ");
	else
		printf("0 ");
	if (!f1 && !f2)  //ÕýÃÃ 
		printf("1");
	else
		printf("0");
	return 0;
}
