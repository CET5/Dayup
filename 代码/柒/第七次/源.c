#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



//ʵ��n^k,ʹ�õݹ� k>0
int funct(int n,int k){
	if (k == 0){
		return 1;
	}
	else{
		return funct(n, k - 1)*n;
	}
}

//����һ���Ǹ���,��������������ֺ�
int DigitSum(int n){
	int sum = 0;
	for (int i = n; i; i /= 10){
		sum = sum + i % 10;
	}
	return sum;
}

//�ݹ�ʵ��n�Ľ׳�
int funct1(int n){
	if (n == 0){
		return 1;
	}
	return funct1(n - 1)*n;
}

//�ǵݹ鷽��ʵ��n�Ľ׳�
int funct2(int n){
	if (n == 1){	//n�Ľ׳�Ϊ1.
		return 1;
	}
	int sum = 1;
	for (int i = n; i > 0; i--){
		sum = sum*i;
	}
	return sum;
}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//�ݹ����n��쳲�������
int funct4(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return funct4(n - 1) + funct4(n - 2);
}

//�ǵݹ����n��쳲�������
int funct5(int n){
	int tmp = 0;
	int tmp1=1;
	int tmp2 = 1;
	if (n < 3){ //��1,2��쳲���������Ϊ1
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

//�ǵݹ�ʵ��strlen
int funct6(char *str){
	int count=0;
	while (*str != '\0'){
		str++;
		count++;
	}
	return count;
}

//�ݹ�ʵ��strlen
int funct7(char *str){
	if (*str != '\0'){
		str++;
		return funct7(str)+1;
	}
	else{
		return 0;
	}
}

//�ݹ�ʵ�ֽ������ַ����е��ַ���������
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