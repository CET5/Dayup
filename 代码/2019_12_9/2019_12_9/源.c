#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//不允许创建临时变量，交换两个整数的内容
int swap(int* a, int*b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return 0;
}

//返回参数二进制中 1 的个数
int count_one_bits(unsigned int value)
{
	// 返回 1的位数
	int count = 0;
	for (int i = 0; value != 0; value >>= 1){
		if ((value & 1) != 0){
			count++;
		}
	}
	return count;
}

//获取一个整数二进制序列中所有的偶数位和奇数位.分别打出
int func(int n)
{
	int tmp1 = n;
	int tmp2 = n >> 1;

	printf("偶数位:");
	for (int i = 0; tmp1 != 0; tmp1 >>= 2, i += 2){
		if ((tmp1 & 1) == 0){
			printf(" 0");
		}
		else {
			printf(" 1");
		}
	}
	printf("\n奇数位:");
	for (int j = 1; tmp2 != 0; tmp2 >>= 2, j += 2){
		if ((tmp2 & 1) == 0){
			printf(" 0");
		}
		else {
			printf(" 1");
		}
	}
	printf("\n");
	return 0;
}

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同
int func1(int a, int b)
{
	int tmp = a^b;
	return count_one_bits(tmp);
}

int func2()
{
	int i=1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d\n", ret);
	return 0;
}
int main()
{
	func2();
	printf("%d\n", func1(1999, 2299));
	func(1024);
	system("pause");
	return 0;
}