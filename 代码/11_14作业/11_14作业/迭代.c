#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int q2() {
	double tmp = 0;
	double sum=0;
	int flog = 1;
	for (int i = 1; i <= 100; i++){
		tmp = tmp + flog*1.0 / i; 
		flog = flog*-1;
	}
	printf("%f\n", tmp);
	system("pause");
	return 0;
	}
int main(){

	int a[4] = { 1, 2, 3, 4 };
	int b[4] = { 5, 6, 7, 8 };
	int c ;
	for (int i=0;i<=3;i++)
	{
		c = a[i];
		a[i] = b[i];
		b[i] = c;
	}
	for (int i = 0; i <= 3; i++){
		printf("% d", a[i]);
	}
	printf("\n");
	for (int i = 0; i <= 3; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	system("pause");
		return 0;
}