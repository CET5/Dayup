#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



//实现n^k,使用递归 k>0
int funct(int n,int k){
	if (k == 0){
		return 1;
	}
	else{
		return funct(n, k - 1)*n;
	}
}

//输入一个非负数,返回组成它的数字和
int DigitSum(int n){
	int sum = 0;
	for (int i = n; i; i /= 10){
		sum = sum + i % 10;
	}
	return sum;
}

//递归实现n的阶乘
int funct1(int n){
	if (n == 0){
		return 1;
	}
	return funct1(n - 1)*n;
}

//非递归方法实现n的阶乘
int funct2(int n){
	if (n == 1){	//n的阶乘为1.
		return 1;
	}
	int sum = 1;
	for (int i = n; i > 0; i--){
		sum = sum*i;
	}
	return sum;
}

//递归方式实现打印一个整数的每一位
void funct3(int n){
	if (n < 10){
		printf("%d\n", n);
		//return 0;
	}
	else {
		funct3(n / 10);
		printf("%d\n", n % 10);
	}
}

//递归求第n个斐波那契数
int funct4(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return funct4(n - 1) + funct4(n - 2);
}

//非递归求第n个斐波那契数
int funct5(int n){
	int tmp = 0;
	int tmp1=1;
	int tmp2 = 1;
	if (n < 3){ //第1,2个斐波那契数都为1
		tmp = 1;
	}
	else{
		for (int i = 3; i <= n; i++){
			tmp = tmp1 + tmp2;
			tmp1 = tmp2;
			tmp2 = tmp;
		}
	}
	return tmp;
}

//非递归实现strlen
int funct6(char *str){
	int count=0;
	while (*str != '\0'){
		str++;
		count++;
	}
	return count;
}

//递归实现strlen
int funct7(char *str){
	if (*str != '\0'){
		str++;
		return funct7(str)+1;
	}
	else{
		return 0;
	}
}

//递归实现将参数字符串中的字符反向排列
void funct8(char *str){
	if('\0' != *str){
		funct8(str+1);
		printf("%c", *str);
	}
}
int main()
{	

	system("pause");
	return 0;
}