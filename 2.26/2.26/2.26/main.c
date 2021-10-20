#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("請輸入二個數字");
	scanf_s("%d %d", &a,&b);
	c= a % b;

	if (c== 1)
	{
		printf("不是倍數\n");
	}
	else
	{
		printf("是倍數\n");
	}
	system("pause");
	return 0;
}
