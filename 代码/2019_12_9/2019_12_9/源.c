#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//����������ʱ������������������������
int swap(int* a, int*b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return 0;
}

//���ز����������� 1 �ĸ���
int count_one_bits(unsigned int value)
{
	// ���� 1��λ��
	int count = 0;
	for (int i = 0; value != 0; value >>= 1){
		if ((value & 1) != 0){
			count++;
		}
	}
	return count;
}

//��ȡһ���������������������е�ż��λ������λ.�ֱ���
int func(int n)
{
	int tmp1 = n;
	int tmp2 = n >> 1;

	printf("ż��λ:");
	for (int i = 0; tmp1 != 0; tmp1 >>= 2, i += 2){
		if ((tmp1 & 1) == 0){
			printf(" 0");
		}
		else {
			printf(" 1");
		}
	}
	printf("\n����λ:");
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

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
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