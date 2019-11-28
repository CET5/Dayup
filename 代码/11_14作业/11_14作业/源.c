#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int q1() {

	int tmp=0;
	for (int i = 1; i <= 100; i++){
		
		if (i / 10 == 9)
			tmp++;
		if (i % 10 == 9)
			tmp++;
	}
	printf("%d\n", tmp);
	system("pause");
	return 0;
	}