#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("叫块计\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b&&a > c)
	{
		printf("程计%d\n", a);
	}
	if (b > a&&b > c)
	{
		printf("程计%d\n", b);
	}
	if (c > a&&c > b)
	{
		printf("程计%d\n", c);
	}
	if (a <b &&a < c)
	{
		printf("程计%d\n", a);
	}
	if (b <a &&b < c)
	{
		printf("程计%d\n", b);
	}
	if (c <a &&c < b)
	{
		printf("程计%d\n", c);
	}
	system("pause");
		return 0;
}