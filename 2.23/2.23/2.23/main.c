#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("�п�J�T�Ӽ�\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b&&a > c)
	{
		printf("�̤j�Ƭ�%d\n", a);
	}
	if (b > a&&b > c)
	{
		printf("�̤j�Ƭ�%d\n", b);
	}
	if (c > a&&c > b)
	{
		printf("�̤j�Ƭ�%d\n", c);
	}
	if (a <b &&a < c)
	{
		printf("�̤p�Ƭ�%d\n", a);
	}
	if (b <a &&b < c)
	{
		printf("�̤p�Ƭ�%d\n", b);
	}
	if (c <a &&c < b)
	{
		printf("�̤p�Ƭ�%d\n", c);
	}
	system("pause");
		return 0;
}