#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int k, p, m, s, c, t;
	printf("�C�Ѧ�p���{\n");
	scanf_s("%d", &k);
	printf("�C�[�ڨT�o������\n");
	scanf_s("%d", &p);
	printf("�C�[�ڨT�o��p���{��\n");
	scanf_s("%d", &m);
	printf("�C�Ѫ������O\n");
	scanf_s("%d", &s);
	printf("�C�Ѫ��L���O\n");
	scanf_s("%d", &c);
	t = (k / m)*p + s + c;
	printf("�`�@�٤U%d��\n", t);
	system("pause");
	return 0;

}