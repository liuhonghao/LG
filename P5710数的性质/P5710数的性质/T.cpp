#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main(){
	int num, f1, f2;
	scanf("%d", &num);
	f1 = (num % 2 == 0);
	f2 = (num>4 && num <= 12);

	if (f1 && f2)  //СA 
		printf("1 ");
	else
		printf("0 ");
	if (f1 || f2)  //Uim 
		printf("1 ");
	else
		printf("0 ");
	if (f1^f2)  //��β�� 
		printf("1 ");
	else
		printf("0 ");
	if (!f1 && !f2)  //���� 
		printf("1");
	else
		printf("0");
	return 0;
}
