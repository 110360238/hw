#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("請輸入一個數字");
	scanf_s("%d", &a);
	b = a%2 ;

	if (b == 1)
	{
		printf("基數\n");
    }
	else
	{
		printf("偶數\n");
	}
	system("pause");
	return 0;
}
