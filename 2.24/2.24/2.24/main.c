#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("�п�J�@�ӼƦr");
	scanf_s("%d", &a);
	b = a%2 ;

	if (b == 1)
	{
		printf("���\n");
    }
	else
	{
		printf("����\n");
	}
	system("pause");
	return 0;
}
