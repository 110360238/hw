#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("叫块计");
	scanf_s("%d", &a);
	b = a%2 ;

	if (b == 1)
	{
		printf("膀计\n");
    }
	else
	{
		printf("案计\n");
	}
	system("pause");
	return 0;
}
