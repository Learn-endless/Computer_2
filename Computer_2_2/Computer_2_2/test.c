#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void func(char* p)
//{
//	while (*p)
//	{
//		printf("%c", *p);
//		p++;
//	}
//}
//int main()
//{
//	char s[] = "ABCDEF";
//	func(s);
//	return 0;
//}

#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
//真题 1 (最后一题)
int prime(int n)
{
	int k, flag = 1;
	//k需要从 2 开始,1不是素数
	for (k = 2; k <= (int)sqrt((double)n); k++)
		if (n % k == 0)
			flag = 0;
	return flag;
}
int fun(int m, int a[])
{
	int k, s, count, i = 0;
	for (k = 6; k <= m; k += 2)
	{
		count = 0;
		/* 请在此处填写代码 */



		if (count == 10) {
			printf("%d\n", k);
			a[i++] = k;
		}
	}
	return i;
}
main()
{
	int count, a[100];
	void NONO(int count, int a[]);
	count = fun(999, a);
	NONO(count, a);
}

void NONO(int count, int a[])
{
	FILE* fp;
	int i;
	fp = fopen("out.dat", "w");
	for (i = 0; i < count; i++)
		fprintf(fp, "%d\n", a[i]);
	fclose(fp);
}