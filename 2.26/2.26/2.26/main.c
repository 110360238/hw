#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	printf("�п�J�G�ӼƦr");
	scanf_s("%d %d", &a,&b);
	c= a % b;

	if (c== 1)
	{
		printf("���O����\n");
	}
	else
	{
		printf("�O����\n");
	}
	system("pause");
	return 0;
}
