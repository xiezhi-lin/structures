#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Ackermann(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (m > 0 && n == 0)
	{
		return Ackermann(m - 1, 1);
	}
	else
	{
		return Ackermann(m - 1, Ackermann(m, 1));
	}
}
int main()
{
	int m, n;
	printf("请输入 m 和 n 的值：");
	scanf("%d %d", &m, &n);
	printf("Ackermann(%d, %d) = %d\n", m, n, Ackermann(m, n));
	return 0;
}